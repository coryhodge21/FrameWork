/**********************************
* \file : SRGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRGPIO_h_
#define _SRGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_SRGPIO_BASE_ADDR	0x400FE508

// Structure Declaration
struct SYSCTL_SRGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRGPIO_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRGPIO_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRGPIO_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRGPIO_e, int32_t);

};

typedef struct SYSCTL_SRGPIO_obj SYSCTL_SRGPIO_t;

// Initializer
SYSCTL_SRGPIO_t init_SYSCTL_SRGPIO(void);


#endif // _SRGPIO_h_

