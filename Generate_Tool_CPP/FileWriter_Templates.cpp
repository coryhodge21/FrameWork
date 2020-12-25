//
// Created by Cory Hodge on 12/24/20.
//

#include "FileWriter.h"

/**         HEADERS     **/
//! \brief Generic Header Module
void FileWriter::template_Module_Header(Module * aModule){

    _moduleFileStream << "/**********************************\n";
    _moduleFileStream << "* \\file : "<< aModule->getName() << ".h \n";
    _moduleFileStream << "* \\author : Cory W. Hodge \n";
    _moduleFileStream << "* \\brief auto generated file \n";
    _moduleFileStream << "************************************/\n\n";

    _moduleFileStream << "#ifndef _" << aModule->getName() << "_h_\n";
    _moduleFileStream << "#define _" << aModule->getName() << "_h_\n\n";

}

//! \brief Generic Header Register
void FileWriter::template_Register_Header(Register * aRegister){

    _registerFileStream << "/**********************************\n";
    _registerFileStream << "* \\file : "<< aRegister->getName() << ".h \n";
    _registerFileStream << "* \\author : Cory W. Hodge \n";
    _registerFileStream << "* \\brief auto generated file \n";
    _registerFileStream << "************************************/\n\n";

    _registerFileStream << "#ifndef _" << aRegister->getName() << "_h_\n";
    _registerFileStream << "#define _" << aRegister->getName() << "_h_\n\n";
}

//! \brief Generic Header Bit Fild
void FileWriter::template_BitField_Header(Register * parentRegister) {

    _bitFieldFileStream << "/**********************************\n";
    _bitFieldFileStream << "* Bit Field Enums for : "<< parentRegister->getName() << ".h \n";
    _bitFieldFileStream << "************************************/\n\n";

}


/**     FOOTER      */
void FileWriter::template_Module_Footer(Module *aModule) {
    _moduleFileStream << "\n#endif // _" << aModule->getName() << "_h_\n\n";
}
void FileWriter::template_Register_Footer(Register *aRegister) {
    _registerFileStream << "\n#endif // _" << aRegister->getName() << "_h_\n\n";
}
void FileWriter::template_BitField_Footer() {
    _bitFieldFileStream << "//*********************************\n\n";
}

/**         BODY        **/


//! \brief Module Body
void FileWriter::template_Module_Body(Module * aModule){

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
void FileWriter::template_Register_Body(Register * aRegister){

    // include enums
    _registerFileStream << "#include \"" << aRegister->getName() << "_enums.h\" \n";
    _registerFileStream << "\n";

    // function pointer types
    // set
    _registerFileStream << "typedef void(Set_fpt)(" << aRegister->getName() << "_e);\n";
    //clear
    _registerFileStream << "typedef void(Clear_fpt)(" << aRegister->getName() << "_e);\n";
    // read
    _registerFileStream << "typedef int32_t(Read_fpt)(" << aRegister->getName() << "_e);\n";
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
void FileWriter::template_BitField_Body(BitField * aBitField){

    // Bit Field Enums
    _bitFieldFileStream << "\n";
    _bitFieldFileStream << "/**********************************\n";
    _bitFieldFileStream << "* Enumerations for : "<< aBitField->getName() << "\n";
    _bitFieldFileStream << "************************************/\n\n";
}

