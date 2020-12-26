//************************************
// \file SYSCTL_EMACPDS.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_EMACPDS.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void EMACPDS_set_this(EMACPDS_e Mask){

    *(volatile unsigned int *)SYSCTL_EMACPDS_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void EMACPDS_clear_this(EMACPDS_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_EMACPDS_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int EMACPDS_read_this(EMACPDS_e Mask){

    return (*(volatile unsigned int *)SYSCTL_EMACPDS_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void EMACPDS_write_this(EMACPDS_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_EMACPDS_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_EMACPDS_t init_SYSCTL_EMACPDS(void){

	// Create Register
	SYSCTL_EMACPDS_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_EMACPDS_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &EMACPDS_set_this;

    Register.clear = &EMACPDS_clear_this;

    Register.read = & EMACPDS_read_this;

    Register.write = & EMACPDS_write_this;

	// Return Initialized Register
	return Register;
}
