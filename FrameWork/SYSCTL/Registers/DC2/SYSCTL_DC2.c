//************************************
// \file SYSCTL_DC2.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_DC2.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void DC2_set_this(DC2_e Mask){

    *(volatile unsigned int *)SYSCTL_DC2_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void DC2_clear_this(DC2_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_DC2_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int DC2_read_this(DC2_e Mask){

    return (*(volatile unsigned int *)SYSCTL_DC2_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void DC2_write_this(DC2_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_DC2_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_DC2_t init_SYSCTL_DC2(void){

	// Create Register
	SYSCTL_DC2_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_DC2_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &DC2_set_this;

    Register.clear = &DC2_clear_this;

    Register.read = &DC2_read_this;

    Register.write = &DC2_write_this;

	// Return Initialized Register
	return Register;
}
