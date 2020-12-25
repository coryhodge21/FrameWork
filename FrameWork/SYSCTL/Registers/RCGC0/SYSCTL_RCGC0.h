/**********************************
* \file : RCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC0_h_
#define _RCGC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGC0_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGC0_BASE_ADDR	0x400FE100

// Structure Declaration
struct SYSCTL_RCGC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGC0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGC0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGC0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGC0_e, int32_t);

};

typedef struct SYSCTL_RCGC0_obj SYSCTL_RCGC0_t;

// Initializer
SYSCTL_RCGC0_t init_SYSCTL_RCGC0(void);


#endif // _RCGC0_h_

