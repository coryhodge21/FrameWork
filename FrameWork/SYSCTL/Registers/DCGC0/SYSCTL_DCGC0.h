/**********************************
* \file : DCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC0_h_
#define _DCGC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGC0_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGC0_BASE_ADDR	0x400FE120

// Structure Declaration
struct SYSCTL_DCGC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGC0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGC0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGC0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGC0_e, int32_t);

};

typedef struct SYSCTL_DCGC0_obj SYSCTL_DCGC0_t;

// Initializer
SYSCTL_DCGC0_t init_SYSCTL_DCGC0(void);


#endif // _DCGC0_h_

