//************************************
// \file SYSCTL_PPHIB.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_PPHIB.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PPHIB_set_this(PPHIB_e Mask){

    *(volatile unsigned int *)SYSCTL_PPHIB_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void PPHIB_clear_this(PPHIB_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_PPHIB_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int PPHIB_read_this(PPHIB_e Mask){

    return (*(volatile unsigned int *)SYSCTL_PPHIB_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void PPHIB_write_this(PPHIB_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_PPHIB_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_PPHIB_t init_SYSCTL_PPHIB(void){

	// Create Register
	SYSCTL_PPHIB_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_PPHIB_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &PPHIB_set_this;

    Register.clear = &PPHIB_clear_this;

    Register.read = &PPHIB_read_this;

    Register.write = &PPHIB_write_this;

	// Return Initialized Register
	return Register;
}
