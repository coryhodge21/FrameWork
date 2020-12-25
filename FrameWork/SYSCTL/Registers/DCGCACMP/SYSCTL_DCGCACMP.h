/**********************************
* \file : DCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCACMP_h_
#define _DCGCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCACMP_BASE_ADDR	0x400FE83C

// Structure Declaration
struct SYSCTL_DCGCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCACMP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCACMP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCACMP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCACMP_e, int32_t);

};

typedef struct SYSCTL_DCGCACMP_obj SYSCTL_DCGCACMP_t;

// Initializer
SYSCTL_DCGCACMP_t init_SYSCTL_DCGCACMP(void);


#endif // _DCGCACMP_h_

