/**********************************
* \file : DCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC1_h_
#define _DCGC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGC1_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGC1_BASE_ADDR	0x400FE124

// Structure Declaration
struct SYSCTL_DCGC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGC1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGC1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGC1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGC1_e, int32_t);

};

typedef struct SYSCTL_DCGC1_obj SYSCTL_DCGC1_t;

// Initializer
SYSCTL_DCGC1_t init_SYSCTL_DCGC1(void);


#endif // _DCGC1_h_

