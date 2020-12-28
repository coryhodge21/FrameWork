//************************************
// \file GPIO_PC.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "GPIO_PC.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PC_set_this(PC_e Mask){

    *(volatile unsigned int *)GPIO_PC_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PC_clear_this(PC_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)GPIO_PC_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PC_read_this(PC_e Mask){

    return (*(volatile unsigned int *)GPIO_PC_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PC_write_this(PC_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)GPIO_PC_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
GPIO_PC_t init_GPIO_PC(void){

	// Create Register
	GPIO_PC_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = GPIO_PC_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PC_set_this;

    Register.clear = &PC_clear_this;

    Register.read = &PC_read_this;

    Register.write = &PC_write_this;

	// Return Initialized Register
	return Register;
}
