//************************************
// \file SYSCTL_SRCAN.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_SRCAN.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SRCAN_set_this(SRCAN_e Mask){

    *(volatile unsigned int *)SYSCTL_SRCAN_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SRCAN_clear_this(SRCAN_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_SRCAN_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int SRCAN_read_this(SRCAN_e Mask){

    return (*(volatile unsigned int *)SYSCTL_SRCAN_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void SRCAN_write_this(SRCAN_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_SRCAN_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_SRCAN_t init_SYSCTL_SRCAN(void){

	// Create Register
	SYSCTL_SRCAN_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_SRCAN_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &SRCAN_set_this;

    Register.clear = &SRCAN_clear_this;

    Register.read = & SRCAN_read_this;

    Register.write = & SRCAN_write_this;

	// Return Initialized Register
	return Register;
}
