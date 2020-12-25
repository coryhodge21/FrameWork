/**********************************
* \file : DID1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DID1_h_
#define _DID1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DID1_enums.h" 

// Base Address for this Register
#define SYSCTL_DID1_BASE_ADDR	0x400FE004

// Structure Declaration
struct SYSCTL_DID1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DID1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DID1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DID1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DID1_e, int32_t);

};

typedef struct SYSCTL_DID1_obj SYSCTL_DID1_t;

// Initializer
SYSCTL_DID1_t init_SYSCTL_DID1(void);


#endif // _DID1_h_

