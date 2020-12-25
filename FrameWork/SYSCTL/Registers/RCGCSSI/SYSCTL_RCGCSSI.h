/**********************************
* \file : RCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCSSI_h_
#define _RCGCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCSSI_BASE_ADDR	0x400FE61C

// Structure Declaration
struct SYSCTL_RCGCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCSSI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCSSI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCSSI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCSSI_e, int32_t);

};

typedef struct SYSCTL_RCGCSSI_obj SYSCTL_RCGCSSI_t;

// Initializer
SYSCTL_RCGCSSI_t init_SYSCTL_RCGCSSI(void);


#endif // _RCGCSSI_h_

