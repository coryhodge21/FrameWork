//************************************
// \file SYSCTL_SRCCM.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_SRCCM.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SRCCM_set_this(SRCCM_e Mask){

    *(volatile unsigned int *)SYSCTL_SRCCM_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SRCCM_clear_this(SRCCM_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_SRCCM_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int SRCCM_read_this(SRCCM_e Mask){

    return (*(volatile unsigned int *)SYSCTL_SRCCM_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void SRCCM_write_this(SRCCM_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_SRCCM_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_SRCCM_t init_SYSCTL_SRCCM(void){

	// Create Register
	SYSCTL_SRCCM_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_SRCCM_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &SRCCM_set_this;

    Register.clear = &SRCCM_clear_this;

    Register.read = & SRCCM_read_this;

    Register.write = & SRCCM_write_this;

	// Return Initialized Register
	return Register;
}
