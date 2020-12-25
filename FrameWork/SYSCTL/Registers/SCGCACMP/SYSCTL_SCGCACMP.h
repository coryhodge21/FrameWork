/**********************************
* \file : SCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCACMP_h_
#define _SCGCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCACMP_BASE_ADDR	0x400FE73C

// Structure Declaration
struct SYSCTL_SCGCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCACMP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCACMP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCACMP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCACMP_e, int32_t);

};

typedef struct SYSCTL_SCGCACMP_obj SYSCTL_SCGCACMP_t;

// Initializer
SYSCTL_SCGCACMP_t init_SYSCTL_SCGCACMP(void);


#endif // _SCGCACMP_h_

