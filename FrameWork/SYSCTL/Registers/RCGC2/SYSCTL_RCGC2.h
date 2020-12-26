/**********************************
* \file : RCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC2_h_
#define _RCGC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGC2_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGC2_BASE_ADDR	0x400FE108

// Structure Declaration
struct SYSCTL_RCGC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGC2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGC2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGC2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGC2_e, int32_t);

};

typedef struct SYSCTL_RCGC2_obj SYSCTL_RCGC2_t;

// Initializer
SYSCTL_RCGC2_t init_SYSCTL_RCGC2(void);


#endif // _RCGC2_h_

