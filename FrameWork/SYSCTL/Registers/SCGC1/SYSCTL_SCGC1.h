/**********************************
* \file : SCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC1_h_
#define _SCGC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGC1_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGC1_BASE_ADDR	0x400FE114

// Structure Declaration
struct SYSCTL_SCGC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGC1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGC1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGC1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGC1_e, int32_t);

};

typedef struct SYSCTL_SCGC1_obj SYSCTL_SCGC1_t;

// Initializer
SYSCTL_SCGC1_t init_SYSCTL_SCGC1(void);


#endif // _SCGC1_h_

