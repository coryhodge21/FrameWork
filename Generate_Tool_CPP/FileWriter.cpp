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

/***    ***************
 *
 *      FILE TEMPLATING
 *
 *      ***************
 */

//! \brief write Module File
//  _moduleFileStream << "writing to file \n";
void FileWriter::writeModule(Module * aModule){

    // Template Header
    template_Header(aModule);

    // Template Module h body
    template_module_h(aModule);

    // Template Footer
    template_Footer(aModule);
}

//! \brief write Register File
//  _registerFileStream << "writing to file \n";
void FileWriter::writeRegister(Register * aRegister){

    // Template Header
    template_Header(aRegister);

    // Template_Register_H body
    template_Register_h(aRegister);

    // Template Footer
    template_Footer(aRegister);
}

//! \brief write Bit Field File
//  _bitFieldFileStream << "writing to file \n";
void FileWriter::writeBitField(BitField * aBitField){

    // Template Header
    template_Header(aBitField);

    // Tempalte_Bit_Field body
    template_BitField_h(aBitField);

    // Template Footer
    template_Footer(aBitField);
}

//! \brief Generic Header Module
void FileWriter::template_Header(Module * aModule){

    _moduleFileStream << "/**********************************\n";
    _moduleFileStream << "* \\file : "<< aModule->getName() << ".h \n";
    _moduleFileStream << "* \\author : Cory W. Hodge \n";
    _moduleFileStream << "* \\brief auto generated file \n";
    _moduleFileStream << "*********************************** */\n\n";

    _moduleFileStream << "#ifndef _" << aModule->getName() << "_h_\n";
    _moduleFileStream << "#define _" << aModule->getName() << "_h_\n\n";

}

//! \brief Generic Header Register
void FileWriter::template_Header(Register * aRegister){

    _registerFileStream << "/**********************************\n";
    _registerFileStream << "* \\file : "<< aRegister->getName() << ".h \n";
    _registerFileStream << "* \\author : Cory W. Hodge \n";
    _registerFileStream << "* \\brief auto generated file \n";
    _registerFileStream << "*********************************** */\n\n";

    _registerFileStream << "#ifndef _" << aRegister->getName() << "_h_\n";
    _registerFileStream << "#define _" << aRegister->getName() << "_h_\n\n";
}

//! \brief Generic Header Bit Fild
void FileWriter::template_Header(BitField * aBitField){
    _bitFieldFileStream << "writing to file \n";

}

/**     FOOTER      */
void FileWriter::template_Footer(Module * aModule){
    _moduleFileStream << "\n#endif // _" << aModule->getName() << "_h_\n\n";
}
void FileWriter::template_Footer(Register * aRegister){
    _registerFileStream << "\n#endif // _" << aRegister->getName() << "_h_\n\n";
}
void FileWriter::template_Footer(BitField * aBitFie){
    _bitFieldFileStream << "\n#endif // _" << aBitFie->getName() << "_h_\n\n";
}

/** Module h    */

//! \brief Module Body
void FileWriter::template_Module_h(Module * aModule){

    /**
     * Generate #include's for each register
     */
    for( int i = 0; i < aModule->getRegisterSize(); i++){
        _moduleFileStream << "#include \"" << aModule->getRegister(i)->getName() << ".h\" \n";
    }
    _moduleFileStream << "\n";

    // typedef struct MODULE_obj {
    _moduleFileStream << "typedef struct " << aModule->getName() << "_obj { \n\n";

    // ADDRESS MOD_BASE_ADDR;
    _moduleFileStream << "\tADDRESS " << aModule->getName() << "_BASE_ADDR;\n";

    // Array of registers
    _moduleFileStream << "\tvoid(*set)(void);\n";
    _moduleFileStream << "\tvoid(*clear)(void);\n";
    _moduleFileStream << "\tvoid(*read)(void);\n";
    _moduleFileStream << "\tvoid(*write)(void);\n";


    // function pointers

    // end Module_t

    // constructor / initializer


}

//! \brief Register Header Body
void FileWriter::template_Register_h(Register * aRegister){


}

//! \brief BitField Header Body
void FileWriter::template_BitField_h(BitField * aBitFied){

}

