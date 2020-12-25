/**********************************
* \file : SRCR1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR1_h_
#define _SRCR1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCR1_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCR1_BASE_ADDR	0x400FE044

// Structure Declaration
struct SYSCTL_SRCR1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRCR1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRCR1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRCR1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRCR1_e, int32_t);

};

typedef struct SYSCTL_SRCR1_obj SYSCTL_SRCR1_t;

// Initializer
SYSCTL_SRCR1_t init_SYSCTL_SRCR1(void);


#endif // _SRCR1_h_

