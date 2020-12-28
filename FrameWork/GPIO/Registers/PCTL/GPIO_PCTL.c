//************************************
// \file GPIO_PCTL.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "GPIO_PCTL.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PCTL_set_this(PCTL_e Mask){

    *(volatile unsigned int *)GPIO_PCTL_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PCTL_clear_this(PCTL_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)GPIO_PCTL_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PCTL_read_this(PCTL_e Mask){

    return (*(volatile unsigned int *)GPIO_PCTL_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PCTL_write_this(PCTL_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)GPIO_PCTL_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
GPIO_PCTL_t init_GPIO_PCTL(void){

	// Create Register
	GPIO_PCTL_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = GPIO_PCTL_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PCTL_set_this;

    Register.clear = &PCTL_clear_this;

    Register.read = &PCTL_read_this;

    Register.write = &PCTL_write_this;

	// Return Initialized Register
	return Register;
}
