/**********************************
* \file : SRCR2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR2_h_
#define _SRCR2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCR2_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCR2_BASE_ADDR	0x400FE048

// Structure Declaration
struct SYSCTL_SRCR2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRCR2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRCR2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRCR2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRCR2_e, int32_t);

};

typedef struct SYSCTL_SRCR2_obj SYSCTL_SRCR2_t;

// Initializer
SYSCTL_SRCR2_t init_SYSCTL_SRCR2(void);


#endif // _SRCR2_h_

