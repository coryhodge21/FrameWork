/**********************************
* \file : RCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCGPIO_h_
#define _RCGCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCGPIO_BASE_ADDR	0x400FE608

// Structure Declaration
struct SYSCTL_RCGCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCGPIO_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCGPIO_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCGPIO_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCGPIO_e, int32_t);

};

typedef struct SYSCTL_RCGCGPIO_obj SYSCTL_RCGCGPIO_t;

// Initializer
SYSCTL_RCGCGPIO_t init_SYSCTL_RCGCGPIO(void);


#endif // _RCGCGPIO_h_

