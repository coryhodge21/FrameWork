//************************************
// \file SYSCTL_SCGCWTIMER.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "SYSCTL_SCGCWTIMER.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SCGCWTIMER_set_this(SCGCWTIMER_e Mask){

    *(volatile unsigned int *)SYSCTL_SCGCWTIMER_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void SCGCWTIMER_clear_this(SCGCWTIMER_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)SYSCTL_SCGCWTIMER_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int SCGCWTIMER_read_this(SCGCWTIMER_e Mask){

    return (*(volatile unsigned int *)SYSCTL_SCGCWTIMER_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void SCGCWTIMER_write_this(SCGCWTIMER_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)SYSCTL_SCGCWTIMER_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
SYSCTL_SCGCWTIMER_t init_SYSCTL_SCGCWTIMER(void){

	// Create Register
	SYSCTL_SCGCWTIMER_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = SYSCTL_SCGCWTIMER_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &SCGCWTIMER_set_this;

    Register.clear = &SCGCWTIMER_clear_this;

    Register.read = & SCGCWTIMER_read_this;

    Register.write = & SCGCWTIMER_write_this;

	// Return Initialized Register
	return Register;
}
