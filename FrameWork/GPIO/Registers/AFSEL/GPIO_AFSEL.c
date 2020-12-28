//************************************
// \file GPIO_AFSEL.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "GPIO_AFSEL.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void AFSEL_set_this(AFSEL_e Mask){

    *(volatile unsigned int *)GPIO_AFSEL_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void AFSEL_clear_this(AFSEL_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)GPIO_AFSEL_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int AFSEL_read_this(AFSEL_e Mask){

    return (*(volatile unsigned int *)GPIO_AFSEL_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void AFSEL_write_this(AFSEL_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)GPIO_AFSEL_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
GPIO_AFSEL_t init_GPIO_AFSEL(void){

	// Create Register
	GPIO_AFSEL_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = GPIO_AFSEL_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &AFSEL_set_this;

    Register.clear = &AFSEL_clear_this;

    Register.read = &AFSEL_read_this;

    Register.write = &AFSEL_write_this;

	// Return Initialized Register
	return Register;
}
