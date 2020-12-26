//************************************
// \file SYSCTL_DC7.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_DC7.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void DC7_set_this(DC7_e Mask){

    *(volatile unsigned int *)SYSCTL_DC7_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void DC7_clear_this(DC7_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_DC7_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int DC7_read_this(DC7_e Mask){

    return (*(volatile unsigned int *)SYSCTL_DC7_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void DC7_write_this(DC7_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_DC7_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_DC7_t init_SYSCTL_DC7(void){

	// Create Register
	SYSCTL_DC7_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_DC7_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &DC7_set_this;

    Register.clear = &DC7_clear_this;

    Register.read = & DC7_read_this;

    Register.write = & DC7_write_this;

	// Return Initialized Register
	return Register;
}
