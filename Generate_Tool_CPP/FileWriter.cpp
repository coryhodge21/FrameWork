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




/// get last element of vector
Module * FileWriter::getLastModule(void){
    return _modules[ _modules.size() - 1];
}

//! destroy the last element in the vector
void FileWriter::popModule(void){
    _modules.pop_back();
}


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

        // TODO : create function to pull this out

        /**     REGISTERS/  general  Directory   */
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

        // create Registers.h file path
        string REGISTERS_H_PATH = modPath + "/Registers.h";


        // open file stream
        ofstream registersFileStream;
        registersFileStream.open(REGISTERS_H_PATH, std::ios::out);

        // check that the file was opened
        if( !registersFileStream.is_open()){
            cout << "ERROR Could not open file : " << REGISTERS_H_PATH << endl;
        }

        /**           Write Registers.h   */
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
         * RECURSIVELY WRITE REGISTER FILES
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

//! \brief write Module File
void FileWriter::writeModule(Module * aModule){

    // Template Header
    template_Header_Module(aModule);

    // Template Module h body
    template_Module_h(aModule);

    // Template Footer
    template_Footer_Module(aModule);
}

//! \brief write Register File;
void FileWriter::writeRegister(Register * aRegister){

    // Template Header
    template_Header_Register(aRegister);

    // Template_Register_H body
    template_Register_h(aRegister);

    // Template Footer
    template_Footer_Register(aRegister);
}

//! \brief write Bit Field File
void FileWriter::writeBitField(BitField * aBitField){

    // Template_Bit_Field body
    template_BitField_h(aBitField);
}

//! \brief Generic Header Module
void FileWriter::template_Header_Module(Module * aModule){

    _moduleFileStream << "/**********************************\n";
    _moduleFileStream << "* \\file : "<< aModule->getName() << ".h \n";
    _moduleFileStream << "* \\author : Cory W. Hodge \n";
    _moduleFileStream << "* \\brief auto generated file \n";
    _moduleFileStream << "************************************/\n\n";

    _moduleFileStream << "#ifndef _" << aModule->getName() << "_h_\n";
    _moduleFileStream << "#define _" << aModule->getName() << "_h_\n\n";

}

//! \brief Generic Header Register
void FileWriter::template_Header_Register(Register * aRegister){

    _registerFileStream << "/**********************************\n";
    _registerFileStream << "* \\file : "<< aRegister->getName() << ".h \n";
    _registerFileStream << "* \\author : Cory W. Hodge \n";
    _registerFileStream << "* \\brief auto generated file \n";
    _registerFileStream << "************************************/\n\n";

    _registerFileStream << "#ifndef _" << aRegister->getName() << "_h_\n";
    _registerFileStream << "#define _" << aRegister->getName() << "_h_\n\n";
}

//! \brief Generic Header Bit Fild
void FileWriter::template_Header_BitField(Register * parentRegister) {

    _bitFieldFileStream << "/**********************************\n";
    _bitFieldFileStream << "* Bit Field Enums for : "<< parentRegister->getName() << ".h \n";
    _bitFieldFileStream << "************************************/\n\n";

}

//! \brief Module Body
void FileWriter::template_Module_h(Module * aModule){

    /**
     * Generate #include's for Registers.h
     * This will be a file for all the register includes for this module
     */
    _moduleFileStream << "#include \"Registers.h\" \n";

    _moduleFileStream << "\n";

    // typedef struct MODULE_obj {
    _moduleFileStream << "typedef struct " << aModule->getName() << "_obj { \n";
    _moduleFileStream << "\n";

    // ADDRESS MOD_BASE_ADDR;
    _moduleFileStream << "\tADDRESS " << aModule->getName() << "_BASE_ADDR;\n";
    _moduleFileStream << "\n";

    // Array of registers
    _moduleFileStream << "\tREGISTER_t Registers[MAX_REGISTER_ARR_SIZE];\n";
    _moduleFileStream << "\n";

    // function pointers
    _moduleFileStream << "\tvoid(*set)(void);\n";
    _moduleFileStream << "\tvoid(*clear)(void);\n";
    _moduleFileStream << "\tvoid(*read)(void);\n";
    _moduleFileStream << "\tvoid(*write)(void);\n";
    _moduleFileStream << "\n";

    // } Module_t;
    _moduleFileStream << "} " << aModule->getName() << "_t;\n";
    _moduleFileStream << "\n";

    // constructor / initializer
    _moduleFileStream << aModule->getName() << "_t CreateModule_" << aModule->getName() << "(void);";
    _moduleFileStream << "\n";

}

//! \brief Register Header Body
void FileWriter::template_Register_h(Register * aRegister){

    // include enums
    _registerFileStream << "#include \"" << aRegister->getName() << "_enums.h\" \n";
    _registerFileStream << "\n";

    // function pointer types
    // set
    _registerFileStream << "typedef void(Set_fpt)(" << aRegister->getName() << "_e);\n";
    //clear
    _registerFileStream << "typedef void(Clear_fpt)(" << aRegister->getName() << "_e);\n";
    // read
    _registerFileStream << "typedef int32_t(Set_fpt)(" << aRegister->getName() << "_e);\n";
    // write
    _registerFileStream << "typedef void(Write_fpt)(" << aRegister->getName() << "_e, int32_t);\n";
    _registerFileStream << "\n";

    // structure decleration
    _registerFileStream << "struct " << aRegister->getName() << "_obj;\n";
    _registerFileStream << "\n";

    // structure typedef
    _registerFileStream << "typedef struct " << aRegister->getName() << "_obj " << aRegister->getName() << "_t;\n";
    _registerFileStream << "\n";

    // register create function
    _registerFileStream << aRegister->getName() << "_t " <<"CreateRegister_"<< aRegister->getName() << "(void);\n";
    _registerFileStream << "\n";
}

//! \brief BitField Header Body
void FileWriter::template_BitField_h(BitField * aBitField){

    // Bit Field Enums
    _bitFieldFileStream << "\n";
    _bitFieldFileStream << "/**********************************\n";
    _bitFieldFileStream << "* Enumerations for : "<< aBitField->getName() << "\n";
    _bitFieldFileStream << "************************************/\n\n";
}

/**     FOOTER      */
void FileWriter::template_Footer_Module(Module *aModule) {
    _moduleFileStream << "\n#endif // _" << aModule->getName() << "_h_\n\n";
}
void FileWriter::template_Footer_Register(Register *aRegister) {
    _registerFileStream << "\n#endif // _" << aRegister->getName() << "_h_\n\n";
}
void FileWriter::template_Footer_BitField() {
    _bitFieldFileStream << "//*********************************\n\n";
}

