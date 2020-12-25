/**********************************
* \file : PRGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRGPIO_h_
#define _PRGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_PRGPIO_BASE_ADDR	0x400FEA08

// Structure Declaration
struct SYSCTL_PRGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRGPIO_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRGPIO_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRGPIO_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRGPIO_e, int32_t);

};

typedef struct SYSCTL_PRGPIO_obj SYSCTL_PRGPIO_t;

// Initializer
SYSCTL_PRGPIO_t init_SYSCTL_PRGPIO(void);


#endif // _PRGPIO_h_

