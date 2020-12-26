//************************************
// \file SYSCTL_PCUSB.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_PCUSB.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PCUSB_set_this(PCUSB_e Mask){

    *(volatile unsigned int *)SYSCTL_PCUSB_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PCUSB_clear_this(PCUSB_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_PCUSB_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PCUSB_read_this(PCUSB_e Mask){

    return (*(volatile unsigned int *)SYSCTL_PCUSB_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PCUSB_write_this(PCUSB_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_PCUSB_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_PCUSB_t init_SYSCTL_PCUSB(void){

	// Create Register
	SYSCTL_PCUSB_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_PCUSB_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PCUSB_set_this;

    Register.clear = &PCUSB_clear_this;

    Register.read = & PCUSB_read_this;

    Register.write = & PCUSB_write_this;

	// Return Initialized Register
	return Register;
}
