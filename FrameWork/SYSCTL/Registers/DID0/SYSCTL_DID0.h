/**********************************
* \file : DID0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DID0_h_
#define _DID0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DID0_enums.h" 

// Base Address for this Register
#define SYSCTL_DID0_BASE_ADDR	0x400FE000

// Structure Declaration
struct SYSCTL_DID0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DID0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DID0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DID0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DID0_e, int32_t);

};

typedef struct SYSCTL_DID0_obj SYSCTL_DID0_t;

// Initializer
SYSCTL_DID0_t init_SYSCTL_DID0(void);


#endif // _DID0_h_

