//
// Created by Cory Hodge on 12/19/20.
//

#include "FileWriter.h"

/**     CONSTRUCTOR / DESTRUCTOR       */
FileWriter:: FileWriter() {
    // TODO : implement better file writer initialization
}
/// Ensure memory deallocated
FileWriter:: ~FileWriter(){

    // if modules vector is not empty
    if(!_modules.empty()){

        // for each module in _modules vector
        // starting from end of vector
        for(int i = _modules.size(); !_modules.empty(); i--){

            // Call module destructor
            _modules[i]->~Module();
        }
    }

    // close all file streams
    _directoryFileStream.close();
    _moduleFileStream.close();
    _registerFileStream.close();
    _bitFieldFileStream.close();
}

/// prep FrameWork Directory and recursively build data tree
int FileWriter::writeFiles(void){

    /** _Directory.h        */
    // create _directory.h file

    // path to FrameWork Directory
    string frameWork_PATH = PATH_TO_FRAMEWORK;

    // In FrameWork/ create file "_Directory.h"
    this->_directoryFileStream.open(( frameWork_PATH + "_Directory.h"), std::ios::out);

    // check that the file was opened
    if( !this->_directoryFileStream.is_open()){
        cout << "ERROR Could not open file : " << (frameWork_PATH + "_Directory.h") << endl;
    }

    /**
     * while _modules vector not empty
     * recursively build data tree
     */
    writeModules();

    // close directory stream
    this->_directoryFileStream.close();

    // return success
    return 1;
}

/// write file module
void FileWriter::writeModules(void){

    // for each Module in the File Writer data tree (_modules)
    while( ! this->isEmpty()) {

        /**     MODULE/ Directory    */
        // create directory for Module

        // get pointer to last module in data tree
        Module * aModule = getLastModule();

        // create path
        string modPath = PATH_TO_FRAMEWORK + aModule->getName();    // ../fwdir/Mod

        // create directory Module/
        if (mkdir(modPath.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        } else {
            cout << "Directory created : " + modPath + "\n";
        }

        /**       MODULE.h    */
        // create directory.h file

        // build path to MODULE header file
        // i.e. : "PATH/ModName/ModName.h
        string modHeader_PATH = modPath + "/" + aModule->getName() + ".h";

        // open for writing, or create if DNE
        this->_moduleFileStream.open((modHeader_PATH), std::ios::out);

        // check that the file was opened
        if( !this->_moduleFileStream.is_open()){
            cout << "ERROR Could not open file : " << modHeader_PATH << endl;
        }

        /**
         * Write the Module.h file
         */
        writeModule(aModule);

        // TODO : create function to pull this out

        /**     REGISTERS/  general  Directory   */
        // within module directory create a Register directory
        /// void WriteModRegisters {

        // create REGISTERS_PATH : "../../FWdir/Mod/Registers
        string REGISTERS_DIR_PATH = modPath + "/Registers";   // Mod/Registers

        // create directory Module/Registers
        if (mkdir(REGISTERS_DIR_PATH.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        }
        else {
            cout << "Directory created : " + REGISTERS_DIR_PATH + "\n";
        }


        /**     Registers.h file    */
        // in module directory write the file Registers.h

        // create Registers.h file path
        string REGISTERS_H_PATH = modPath + "/Registers.h";

        // open file stream
        ofstream registersFileStream;
        registersFileStream.open(REGISTERS_H_PATH, std::ios::out);

        // check that the file was opened
        if( !registersFileStream.is_open()){
            cout << "ERROR Could not open file : " << REGISTERS_H_PATH << endl;
        }

        /**           TODO : Function : Write Registers.h   */
        registersFileStream << "/***************\n";
        registersFileStream << "* \\file : Registers.h\n";
        registersFileStream << "* \\author : Cory W. Hodge\n";
        registersFileStream << "* \\brief : auto generated file\n";
        registersFileStream << "***************/\n\n";

        registersFileStream << "#ifndef _REGISTERS_H_\n";
        registersFileStream << "#define _REGISTERS_H_\n\n";

        /**
         * Generate #include's for each register
         */
        for( int i = 0; i < aModule->getRegisterSize(); i++){
            registersFileStream << "#include \"" << aModule->getRegister(i)->getName() << ".h\" \n";
        }

        registersFileStream << "\n";
        registersFileStream << "#endif // _REGISTERS_H_\n";

        /// }

        /**
         * RECURSIVELY WRITE REGISTER FILES for each module register
         * while Module register not empty, write registers
         */
        writeRegisters(aModule, REGISTERS_DIR_PATH);

        // DESTROY MODULE
        popModule();

        // close file stream
        _moduleFileStream.close();
    }
}

/// write file register
void FileWriter::writeRegisters(Module * parentModule, string modPath){

    /**   Specific Register Directory and .h     */
    ///     for each Register in Module tree
    while ( ! parentModule->isEmpty() ) {

        /**     Specific Register   Directory   */
        // create directory for this specific register

        // get pointer to last register in module tree
        Register * aRegister = (parentModule->getLastRegister());

        // build directory path :  "../../FWdir/Mod/Registers" "/RegName
        string regDirPath = modPath + "/" + aRegister->getName();   // Mod/Registers/Reg

        // create directory Module/Registers/Register
        if (mkdir(regDirPath.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        }
        else {
            cout << "Directory created : " + regDirPath;
        }

        /**     Register.h      */
        // within register specific directory, write Register .h file
        // create path to file : "../../FWdir/Mod/Registers/RegName" " /RegName.h"
        string regFilePath = regDirPath + "/" + aRegister->getName()+ ".h";

        // create file register.h (template starter file)
        _registerFileStream.open( regFilePath, std::ios::out);

        // check that the file was opened
        if( !this->_registerFileStream.is_open()){
            cout << "ERROR Could not open file : " << regFilePath << endl;
        }

        // write file register.h
        writeRegister(aRegister);

        /**
         * REGISTER_enums.h
         *      RECURSIVELY WRITE BIT FIELDS
         */
        // append all bit field enums
        writeBitFields(aRegister, regDirPath);

        // destroy register
        parentModule->popRegister();

        // close file stream
        _registerFileStream.close();
    }


}

/// write bit fields as enums for parent register
void FileWriter::writeBitFields(Register * parentRegister, string regDirPath){

    // one make 1 reg_enums file
    if (! parentRegister->isEmpty()){

        // get pointer to last bit field
        BitField * aBitField = (parentRegister->getLastBitField());

        /**     Reg_enums.h      */

        // create path to file
        string bfFilePath = regDirPath + "/" + parentRegister->getName() + "_enums.h";    // Mod/Registers/Reg_enums.h

        // create file Reg_enums.h
        _bitFieldFileStream.open( bfFilePath, std::ios::out);

        // check that the file was opened
        if( !this->_bitFieldFileStream.is_open()){
            cout << "ERROR Could not open file : " << bfFilePath << endl;
        }
    }

    // Enums Block Begin
    template_Header_BitField(parentRegister);

    // for each bit field in register tree
    while (! parentRegister->isEmpty()){

        // write file Register_enums.h ( append )
        writeBitField(parentRegister->getLastBitField());

        // destroy bitfield
        parentRegister->popBitField();
    }

    // Template Footer for bitfields
    template_Footer_BitField();

    // close file stream
    _bitFieldFileStream.close();
}

/// assign file writer a populated vector of Module *
void FileWriter::setModules(vector<Module *> modules) {
    _modules = modules;
}

/// check if file writer data vector is empty
int FileWriter::isEmpty(void) {

    // if no modules, data tree is empty
    if (this->_modules.empty()) {
        return 1;
    }
    return 0;
}

/// get last element of vector
Module * FileWriter::getLastModule(void){
    return _modules[ _modules.size() - 1];
}

//! destroy the last element in the vector
void FileWriter::popModule(void){
    _modules.pop_back();
}



