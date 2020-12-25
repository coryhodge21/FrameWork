/**********************************
* \file : SCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC0_h_
#define _SCGC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGC0_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGC0_BASE_ADDR	0x400FE110

// Structure Declaration
struct SYSCTL_SCGC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGC0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGC0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGC0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGC0_e, int32_t);

};

typedef struct SYSCTL_SCGC0_obj SYSCTL_SCGC0_t;

// Initializer
SYSCTL_SCGC0_t init_SYSCTL_SCGC0(void);


#endif // _SCGC0_h_

