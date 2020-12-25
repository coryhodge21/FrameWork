/**********************************
* \file : SRCR0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR0_h_
#define _SRCR0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCR0_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCR0_BASE_ADDR	0x400FE040

// Structure Declaration
struct SYSCTL_SRCR0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRCR0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRCR0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRCR0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRCR0_e, int32_t);

};

typedef struct SYSCTL_SRCR0_obj SYSCTL_SRCR0_t;

// Initializer
SYSCTL_SRCR0_t init_SYSCTL_SRCR0(void);


#endif // _SRCR0_h_

