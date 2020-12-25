/**********************************
* \file : PPACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPACMP_h_
#define _PPACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_PPACMP_BASE_ADDR	0x400FE33C

// Structure Declaration
struct SYSCTL_PPACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPACMP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPACMP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPACMP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPACMP_e, int32_t);

};

typedef struct SYSCTL_PPACMP_obj SYSCTL_PPACMP_t;

// Initializer
SYSCTL_PPACMP_t init_SYSCTL_PPACMP(void);


#endif // _PPACMP_h_

