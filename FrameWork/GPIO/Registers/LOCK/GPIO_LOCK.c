//************************************
// \file GPIO_LOCK.c
// \author : Cory W. Hodge
// \brief : Auto Generated File
//**********************************

#include "GPIO_LOCK.h"

//! \brief Set all the bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void LOCK_set_this(LOCK_e Mask){

    *(volatile unsigned int *)GPIO_LOCK_BASE_ADDR |= (Mask);
}
//! \brief Clear all bits in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
void LOCK_clear_this(LOCK_e Mask){

    // Clear masked bits at address MOD_REG_BASE_ADDR
    *(volatile unsigned int *)GPIO_LOCK_BASE_ADDR &= ~(Mask);
}
//! \brief Read and Return value in this register, masked with enum arg
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[out] int : Masked Value at this Register Address
int LOCK_read_this(LOCK_e Mask){

    return (*(volatile unsigned int *)GPIO_LOCK_BASE_ADDR & (Mask));
}
//! \brief Write the value of msg masked with enum, to this register address
//! \brief param[in] Bit_Field_Mask : predefined set of masks available via enum
//! \brief param[in] msg : signed value to write to this register, masked with enum arg
void LOCK_write_this(LOCK_e Mask, int msg) {

    // Assign _BF mask to address MOD_REG
    *(volatile unsigned int *)GPIO_LOCK_BASE_ADDR = (Mask & msg);
}
//! \brief Constructor for this Register
//! \brief param[out] Register with assigned address and function pointers
GPIO_LOCK_t init_GPIO_LOCK(void){

	// Create Register
	GPIO_LOCK_t	Register;

    // For Direct Memory Location Access
    Register.BASE_ADDR = GPIO_LOCK_BASE_ADDR;

    // predefined function set to perform basic Read, Write, Modify Actions
    Register.set = &LOCK_set_this;

    Register.clear = &LOCK_clear_this;

    Register.read = &LOCK_read_this;

    Register.write = &LOCK_write_this;

	// Return Initialized Register
	return Register;
}
