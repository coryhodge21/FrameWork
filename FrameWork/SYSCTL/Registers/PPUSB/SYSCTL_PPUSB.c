//************************************
// \file SYSCTL_PPUSB.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_PPUSB.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PPUSB_set_this(PPUSB_e Mask){

    *(volatile unsigned int *)SYSCTL_PPUSB_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PPUSB_clear_this(PPUSB_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_PPUSB_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PPUSB_read_this(PPUSB_e Mask){

    return (*(volatile unsigned int *)SYSCTL_PPUSB_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PPUSB_write_this(PPUSB_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_PPUSB_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_PPUSB_t init_SYSCTL_PPUSB(void){

	// Create Register
	SYSCTL_PPUSB_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_PPUSB_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PPUSB_set_this;

    Register.clear = &PPUSB_clear_this;

    Register.read = & PPUSB_read_this;

    Register.write = & PPUSB_write_this;

	// Return Initialized Register
	return Register;
}
