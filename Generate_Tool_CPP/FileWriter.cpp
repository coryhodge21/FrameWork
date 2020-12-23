//
// Created by Cory Hodge on 12/19/20.
//

#include "FileWriter.h"

/**     CONSTRUCTOR / DESTRUCTOR       */

FileWriter:: FileWriter() {
    // TODO : implement better file writer initialization
}
FileWriter:: ~FileWriter(){
    // TODO : Free data tree
}

/**     SETTERS / GETTERS       */

/// assign file writer a populated vector of Module *
void FileWriter::setModules(vector<Module *> modules) {
    _modules = modules;
}

/**   Public :  File Writer Special Functions   */

/// check if file writer data vector is empty
int FileWriter::isEmpty(void) {

    // if no modules, data tree is empty
    if (this->_modules.empty()) {
        return 1;
    }
    return 0;
}

/// prep FrameWork Directory and recursively build data tree
int FileWriter::writeFiles(void){

    /** _Directory.h        */

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

/**   Private:  File Writer Special Functions   */

/// write file module
void FileWriter::writeModules(void){

    // for each Module in the data tree
    while( ! this->isEmpty()) {

        /**     MODULE/ Directory    */

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

        /**
         * RECURSIVELY WRITE REGISTER FILES
         * while Module register not empty, write registers
         */
        writeRegisters(aModule, modPath);

        // DESTROY MODULE
        popModule();

        // close file stream
        _moduleFileStream.close();
    }
}

/// write file register
void FileWriter::writeRegisters(Module * parentModule, string modPath){

    /**     REGISTERS/  general  Directory   */

    // create REGISTERS_PATH : "../../FWdir/Mod/Registers
    string REGISTERS_PATH = modPath + "/Registers";   // Mod/Registers

    // create directory Module/Registers
    if (mkdir(REGISTERS_PATH.c_str(), 0777) == -1) {
        cerr << "Error :  " << strerror(errno) << endl;
    }
    else {
        cout << "Directory created : " + REGISTERS_PATH + "\n";
    }

    /**   Specific Register Directory and .h     */
    ///     for each Register in Module tree
    while ( ! parentModule->isEmpty() ) {

        /**     Specific Register   Directory   */

        // get pointer to last register in module tree
        Register * aRegister = (parentModule->getLastRegister());

        // build directory path :  "../../FWdir/Mod/Registers" "/RegName
        string regDirPath = REGISTERS_PATH + "/" + aRegister->getName();   // Mod/Registers/Reg

        // create directory Module/Registers/Register
        if (mkdir(regDirPath.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        }
        else {
            cout << "Directory created : " + regDirPath;
        }

        /**     Register.h      */
        // create path to file : "../../FWdir/Mod/Registers/RegName" " /RegName.h"
        string regFilePath = regDirPath + "/" + aRegister->getName()+ ".h";

        // create file register.h (template starter file)
        _registerFileStream.open( regFilePath, std::ios::out);

        // check that the file was opened
        if( !this->_registerFileStream.is_open()){
            cout << "ERROR Could not open file : " << regFilePath << endl;
        }

        // write file register.h ( finish )
        writeRegister(aRegister);

        /**     RECURSIVELY WRITE BIT FIELD FILES FOR REGISTER.h     */
        // append all bit field enums
        writeBitFields(aRegister, regDirPath);

        // destroy register
        parentModule->popRegister();

        // close file stream
        _registerFileStream.close();
    }


}

// write bit fields as enums for parent register
// regPath : Mod/Registers/Reg
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

    // for each bit field in register tree
    while (! parentRegister->isEmpty()){

        // write file Register_enums.h ( append )
        writeBitField(parentRegister->getLastBitField());

        // destroy bitfield
        parentRegister->popBitField();
    }

    // close file stream
    _bitFieldFileStream.close();
}

/// get last element of vector
Module * FileWriter::getLastModule(void){
    return _modules[ _modules.size() - 1];
}

//! destroy the last element in the vector
void FileWriter::popModule(void){
    _modules.pop_back();
}

//! \brief writeModule
void FileWriter::writeModule(Module * aModule){

    _moduleFileStream << "writing to file \n";
    _moduleFileStream << aModule->getName();
    _moduleFileStream << "\n";
}

//! \brief writeModule
void FileWriter::writeRegister(Register * aRegister){
    _registerFileStream << "writing to file \n";
    _registerFileStream << aRegister->getName();
    _registerFileStream << "\n";
}

//! \brief writeModule
void FileWriter::writeBitField(BitField * aBitField){
    _bitFieldFileStream << "writing to file \n";
    _bitFieldFileStream << aBitField->getName();
    _bitFieldFileStream << "\n";
}