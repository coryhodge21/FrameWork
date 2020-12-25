/**********************************
* \file : PCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCACMP_h_
#define _PCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_PCACMP_BASE_ADDR	0x400FE93C

// Structure Declaration
struct SYSCTL_PCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCACMP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCACMP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCACMP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCACMP_e, int32_t);

};

typedef struct SYSCTL_PCACMP_obj SYSCTL_PCACMP_t;

// Initializer
SYSCTL_PCACMP_t init_SYSCTL_PCACMP(void);


#endif // _PCACMP_h_

