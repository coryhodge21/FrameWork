/**********************************
* \file : SCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC2_h_
#define _SCGC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGC2_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGC2_BASE_ADDR	0x400FE118

// Structure Declaration
struct SYSCTL_SCGC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGC2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGC2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGC2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGC2_e, int32_t);

};

typedef struct SYSCTL_SCGC2_obj SYSCTL_SCGC2_t;

// Initializer
SYSCTL_SCGC2_t init_SYSCTL_SCGC2(void);


#endif // _SCGC2_h_

