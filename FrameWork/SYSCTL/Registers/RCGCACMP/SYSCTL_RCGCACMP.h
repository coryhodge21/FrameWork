/**********************************
* \file : RCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCACMP_h_
#define _RCGCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCACMP_BASE_ADDR	0x400FE63C

// Structure Declaration
struct SYSCTL_RCGCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCACMP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCACMP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCACMP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCACMP_e, int32_t);

};

typedef struct SYSCTL_RCGCACMP_obj SYSCTL_RCGCACMP_t;

// Initializer
SYSCTL_RCGCACMP_t init_SYSCTL_RCGCACMP(void);


#endif // _RCGCACMP_h_

