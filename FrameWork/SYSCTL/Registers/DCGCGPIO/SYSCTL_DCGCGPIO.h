/**********************************
* \file : DCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCGPIO_h_
#define _DCGCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCGPIO_BASE_ADDR	0x400FE808

// Structure Declaration
struct SYSCTL_DCGCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCGPIO_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCGPIO_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCGPIO_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCGPIO_e, int32_t);

};

typedef struct SYSCTL_DCGCGPIO_obj SYSCTL_DCGCGPIO_t;

// Initializer
SYSCTL_DCGCGPIO_t init_SYSCTL_DCGCGPIO(void);


#endif // _DCGCGPIO_h_

