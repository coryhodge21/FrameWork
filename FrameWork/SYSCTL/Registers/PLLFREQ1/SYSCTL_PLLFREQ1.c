//************************************
// \file SYSCTL_PLLFREQ1.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_PLLFREQ1.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PLLFREQ1_set_this(PLLFREQ1_e Mask){

    *(volatile unsigned int *)SYSCTL_PLLFREQ1_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PLLFREQ1_clear_this(PLLFREQ1_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_PLLFREQ1_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PLLFREQ1_read_this(PLLFREQ1_e Mask){

    return (*(volatile unsigned int *)SYSCTL_PLLFREQ1_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PLLFREQ1_write_this(PLLFREQ1_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_PLLFREQ1_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_PLLFREQ1_t init_SYSCTL_PLLFREQ1(void){

	// Create Register
	SYSCTL_PLLFREQ1_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_PLLFREQ1_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PLLFREQ1_set_this;

    Register.clear = &PLLFREQ1_clear_this;

    Register.read = & PLLFREQ1_read_this;

    Register.write = & PLLFREQ1_write_this;

	// Return Initialized Register
	return Register;
}
