/**********************************
* \file : DCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC2_h_
#define _DCGC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGC2_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGC2_BASE_ADDR	0x400FE128

// Structure Declaration
struct SYSCTL_DCGC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGC2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGC2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGC2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGC2_e, int32_t);

};

typedef struct SYSCTL_DCGC2_obj SYSCTL_DCGC2_t;

// Initializer
SYSCTL_DCGC2_t init_SYSCTL_DCGC2(void);


#endif // _DCGC2_h_

