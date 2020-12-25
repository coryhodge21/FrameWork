/**********************************
* \file : PPGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPGPIO_h_
#define _PPGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_PPGPIO_BASE_ADDR	0x400FE308

// Structure Declaration
struct SYSCTL_PPGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPGPIO_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPGPIO_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPGPIO_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPGPIO_e, int32_t);

};

typedef struct SYSCTL_PPGPIO_obj SYSCTL_PPGPIO_t;

// Initializer
SYSCTL_PPGPIO_t init_SYSCTL_PPGPIO(void);


#endif // _PPGPIO_h_

