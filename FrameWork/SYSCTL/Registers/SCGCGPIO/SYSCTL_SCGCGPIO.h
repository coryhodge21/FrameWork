/**********************************
* \file : SCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCGPIO_h_
#define _SCGCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCGPIO_BASE_ADDR	0x400FE708

// Structure Declaration
struct SYSCTL_SCGCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCGPIO_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCGPIO_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCGPIO_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCGPIO_e, int32_t);

};

typedef struct SYSCTL_SCGCGPIO_obj SYSCTL_SCGCGPIO_t;

// Initializer
SYSCTL_SCGCGPIO_t init_SYSCTL_SCGCGPIO(void);


#endif // _SCGCGPIO_h_

