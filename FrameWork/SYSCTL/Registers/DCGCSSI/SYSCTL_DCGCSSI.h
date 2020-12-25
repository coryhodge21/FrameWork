/**********************************
* \file : DCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCSSI_h_
#define _DCGCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCSSI_BASE_ADDR	0x400FE81C

// Structure Declaration
struct SYSCTL_DCGCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCSSI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCSSI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCSSI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCSSI_e, int32_t);

};

typedef struct SYSCTL_DCGCSSI_obj SYSCTL_DCGCSSI_t;

// Initializer
SYSCTL_DCGCSSI_t init_SYSCTL_DCGCSSI(void);


#endif // _DCGCSSI_h_

