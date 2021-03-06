/*
 * Register.c
 *
 *  Created on: Dec 14, 2020
 *      Author: coryhodge
 */

#include "Register.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void set_this(Reg_BF_e Bit_Field_Mask){

    // TODO: use gen tool to populate define for
    *(volatile unsigned int *)SYSCTL_RCGC2 |= (Bit_Field_Mask);
}

//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void clear_this(Reg_BF_e Bit_Field_Mask) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_RCGC2 &= ~(Bit_Field_Mask);
}

//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int32_t : Masked Value at this Register Address
int32_t read_this(Reg_BF_e Bit_Field_Mask){

    return (*(volatile unsigned int *)SYSCTL_RCGC2 & (Bit_Field_Mask));
}

//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void write_this(Reg_BF_e Bit_Field_Mask, int32_t msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_RCGC2 |= (Bit_Field_Mask & msg);
}

//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
REGISTER_t BUILDER_REGISTER(void){

    // Create Register
    REGISTER_t Register;

    // For Direct Memory Location Access
    // TODO: use gen_tool to populate this with a defined value
    Register.REG_BASE_ADDR = SYSCTL_RCGC2;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &set_this;

    Register.clear = &clear_this;

    Register.read = &read_this;

    Register.write = &write_this;

    //
    return Register;
}



