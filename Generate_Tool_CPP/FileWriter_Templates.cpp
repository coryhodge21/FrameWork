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
    _bitFieldFileStream << "************************************/\n";
    _bitFieldFileStream << "\n";
    _bitFieldFileStream << "typedef enum { \n";
    _bitFieldFileStream << "\n";

}


/**     FOOTER      */
void FileWriter::template_Module_Footer(Module *aModule) {
    _moduleFileStream << "\n#endif // _" << aModule->getName() << "_h_\n\n";
}
void FileWriter::template_Register_Footer(Register *aRegister) {
    _registerFileStream << "\n#endif // _" << aRegister->getName() << "_h_\n\n";
}
void FileWriter::template_BitField_Footer(Module *aModule) {
    _bitFieldFileStream << "\n";
    _bitFieldFileStream << "} " << aModule->getLastRegister()->getName() << "_e;\n";
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
void FileWriter::template_Register_Body(Module * parentModule){

    Register * aRegister = parentModule->getLastRegister();
    string Mod_Reg_name = parentModule->getName() + "_" + aRegister->getName();
    string Mod_Reg_e = Mod_Reg_name + "_e";

    // include enums
    _registerFileStream << "//! \\brief Enumerations for this Register\n";
    _registerFileStream << "#include \"" << Mod_Reg_name << "_enums.h\" \n";
    _registerFileStream << "\n";
    _registerFileStream << "// Base Address for this Register\n";
    _registerFileStream << "#define " << Mod_Reg_name << "_BASE_ADDR\t" << aRegister->getAddress() << "\n";
    _registerFileStream << "\n";

    // structure declaration
    _registerFileStream << "// Structure Declaration\n";
    _registerFileStream << "struct " << Mod_Reg_name << "_obj {\n";
    _registerFileStream << "\n";
    _registerFileStream << "\t// Address of this Vector (Absolute)\n";
    _registerFileStream << "\tunsigned int BASE_ADDR;\n";
    _registerFileStream << "\n";
    _registerFileStream << "\t/** Function Pointers to Register Operations    */\n";
    _registerFileStream << "\n";
    _registerFileStream << "\t// Set the Bits of this Register Masked by the enumeration\n";
    _registerFileStream << "\tvoid(*set)(" << Mod_Reg_e << ");\n";
    _registerFileStream << "\n";
    _registerFileStream << "\t// Clear the Bits of this Register Masked by the enumeration\n";
    _registerFileStream << "\tvoid(*clear)(" << Mod_Reg_e << ");\n";
    _registerFileStream << "\n";
    _registerFileStream << "\t// Read the Bits of this Register Masked by the enumeration\n";
    _registerFileStream << "\tint32_t(*read)(" << Mod_Reg_e << ");\n";;
    _registerFileStream << "\n";
    _registerFileStream << "\t// Write the Bits of this Register Masked by the enumeration\n";
    _registerFileStream << "\tvoid(*write)(" << Mod_Reg_e << ", int32_t);\n";
    _registerFileStream << "\n";
    _registerFileStream << "};\n";
    _registerFileStream << "\n";

    // structure typedef
    _registerFileStream << "typedef struct " << Mod_Reg_name << "_obj " << Mod_Reg_name << "_t;\n";
    _registerFileStream << "\n";

    // register create function
    _registerFileStream << "// Initializer\n";
    _registerFileStream << Mod_Reg_name << "_t " <<"init_"<< Mod_Reg_name << "(void);\n";
    _registerFileStream << "\n";
}

//! \brief BitField Header Body
void FileWriter::template_BitField_Body(BitField * aBitField){

    // Bit Field Enums
    _bitFieldFileStream << "\t" << aBitField->getName() << "\t=\t"
                            << aBitField->getMask() << ",\t" << aBitField->getDescriptor()
                            << "\n";

}

