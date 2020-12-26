//
// Created by Cory Hodge on 12/24/20.
//

#include "FileWriter.h"

//! \brief write Module File
void FileWriter::write_Module_h(){

    // get pointer to last module in data tree
    Module * aModule = getLastModule();

    // Template Header
    template_Module_Header(aModule);

    // Template Module h body
    template_Module_Body(aModule);

    // Template Footer
    template_Module_Footer(aModule);
}

//! \brief write Register File;
void FileWriter::write_Register_h(Module *  parentModule){

    Register * aRegister = parentModule->getLastRegister();
    // Template Header
    template_Register_Header(aRegister);

    // Template_Register_H body
    template_Register_Body(parentModule);

    // Template Footer
    template_Register_Footer(aRegister);

    // close file stream
    _registerFileStream.close();
}


void FileWriter::write_Register_enums(){

    // get pointer to last module in data tree
    Module *parentModule = getLastModule();

    // get pointer to last register in module tree
    Register *parentRegister = (parentModule->getLastRegister());

    template_BitField_Header(parentRegister);

    // for each bit field in register tree
    while (! parentRegister->isEmpty()){

        // Template_Bit_Field body
        template_BitField_Body(parentRegister->getLastBitField());

        // destroy bitfield
        parentRegister->popBitField();
    }

    // Template Footer for bitfields
    template_BitField_Footer(parentModule);

    // close file stream
    _bitFieldFileStream.close();
}

// register stream is already opend with create_REGISTERS_h();
void FileWriter::write_REGISTERS_h(){


}

// write module c file
void FileWriter::write_Module_c(){

}

// write register c file
void FileWriter::write_Register_c(){

    Module * parentModule = getLastModule();
    Register * aRegister = parentModule->getLastRegister();
    string Mod_Reg_name = parentModule->getName() + "_" + aRegister->getName();
    string Reg_name = aRegister->getName();
    string Reg_e = Reg_name + "_e";

    // include enums
    _registerFileStream << "//************************************\n"
                        << "// \\file "<< Mod_Reg_name << ".c\n"
                        << "// \\author : Cory W. Hodge\n"
                        << "// \\brief : Auto Generated File\n"
                        << "//**********************************\n"
                        << "\n";

    _registerFileStream << "#include \"" << Mod_Reg_name << ".h\"\n"
                        << "\n";

    _registerFileStream << "//! \\brief Set all the bits in this register, masked with enum arg\n"
                        << "//! \\brief param[in] Bit_Field_Mask : predefined set of masks available via enum\n"
                        << "void " << Reg_name << "_set_this(" << Reg_e << " Mask){\n"
                           "\n"
                           "    *(volatile unsigned int *)"<< Mod_Reg_name << "_BASE_ADDR |= (Mask);\n"
                           "}\n";

    _registerFileStream << "//! \\brief Clear all bits in this register, masked with enum arg\n"
                           "//! \\brief param[in] Bit_Field_Mask : predefined set of masks available via enum\n"
                           "void " << Reg_name << "_clear_this(" << Reg_e << " Mask){\n"
                           "\n"
                           "    // Clear masked bits at address MOD_REG_BASE_ADDR\n"
                           "    *(volatile unsigned int *)"<< Mod_Reg_name << "_BASE_ADDR &= ~(Mask);\n"
                           "}\n";

    _registerFileStream << "//! \\brief Read and Return value in this register, masked with enum arg\n"
                           "//! \\brief param[in] Bit_Field_Mask : predefined set of masks available via enum\n"
                           "//! \\brief param[out] int : Masked Value at this Register Address\n"
                           "int " << Reg_name << "_read_this(" << Reg_e << " Mask){\n"
                           "\n"
                           "    return (*(volatile unsigned int *)"<< Mod_Reg_name << "_BASE_ADDR & (Mask));\n"
                           "}\n";

    _registerFileStream << "//! \\brief Write the value of msg masked with enum, to this register address\n"
                           "//! \\brief param[in] Bit_Field_Mask : predefined set of masks available via enum\n"
                           "//! \\brief param[in] msg : signed value to write to this register, masked with enum arg\n"
                           "void " << Reg_name << "_write_this(" << Reg_e << " Mask, int msg) {\n"
                           "\n"
                           "    // Assign _BF mask to address MOD_REG\n"
                           "    *(volatile unsigned int *)"<< Mod_Reg_name << "_BASE_ADDR = (Mask & msg);\n"
                           "}\n";

    _registerFileStream << "//! \\brief Constructor for this Register\n"
                           "//! \\brief param[out] Register with assigned address and function pointers\n"
                           << Mod_Reg_name << "_t init_" << Mod_Reg_name <<"(void){\n"
                           "\n"
                           "\t// Create Register\n"
                           "\t"<< Mod_Reg_name <<"_t\tRegister;\n"
                           "\n"
                           "    // For Direct Memory Location Access\n"
                           "    Register.BASE_ADDR = " << Mod_Reg_name << "_BASE_ADDR;\n"
                           "\n"
                           "    // predefined function set to perform basic Read, Write, Modify Actions\n"
                           "    Register.set = &" << Reg_name << "_set_this;\n"
                           "\n"
                           "    Register.clear = &" << Reg_name << "_clear_this;\n"
                           "\n"
                           "    Register.read = &" << Reg_name << "_read_this;\n"
                           "\n"
                           "    Register.write = &" << Reg_name << "_write_this;\n"
                           "\n"
                           "\t// Return Initialized Register\n"
                           "\treturn Register;\n"
                           "}\n";
}