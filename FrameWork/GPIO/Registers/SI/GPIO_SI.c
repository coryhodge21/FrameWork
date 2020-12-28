//************************************
// \file GPIO_SI.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "GPIO_SI.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SI_set_this(SI_e Mask){

    *(volatile unsigned int *)GPIO_SI_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SI_clear_this(SI_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)GPIO_SI_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int SI_read_this(SI_e Mask){

    return (*(volatile unsigned int *)GPIO_SI_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void SI_write_this(SI_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)GPIO_SI_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
GPIO_SI_t init_GPIO_SI(void){

	// Create Register
	GPIO_SI_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = GPIO_SI_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &SI_set_this;

    Register.clear = &SI_clear_this;

    Register.read = &SI_read_this;

    Register.write = &SI_write_this;

	// Return Initialized Register
	return Register;
}
