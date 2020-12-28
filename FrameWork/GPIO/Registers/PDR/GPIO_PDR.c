//************************************
// \file GPIO_PDR.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "GPIO_PDR.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PDR_set_this(PDR_e Mask){

    *(volatile unsigned int *)GPIO_PDR_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PDR_clear_this(PDR_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)GPIO_PDR_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PDR_read_this(PDR_e Mask){

    return (*(volatile unsigned int *)GPIO_PDR_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PDR_write_this(PDR_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)GPIO_PDR_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
GPIO_PDR_t init_GPIO_PDR(void){

	// Create Register
	GPIO_PDR_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = GPIO_PDR_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PDR_set_this;

    Register.clear = &PDR_clear_this;

    Register.read = &PDR_read_this;

    Register.write = &PDR_write_this;

	// Return Initialized Register
	return Register;
}
