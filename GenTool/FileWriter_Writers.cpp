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