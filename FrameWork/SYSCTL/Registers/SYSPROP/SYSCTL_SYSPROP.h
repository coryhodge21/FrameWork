/**********************************
* \file : SYSPROP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SYSPROP_h_
#define _SYSPROP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SYSPROP_enums.h" 

// Base Address for this Register
#define SYSCTL_SYSPROP_BASE_ADDR	0x400FE14C

// Structure Declaration
struct SYSCTL_SYSPROP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SYSPROP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SYSPROP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SYSPROP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SYSPROP_e, int32_t);

};

typedef struct SYSCTL_SYSPROP_obj SYSCTL_SYSPROP_t;

// Initializer
SYSCTL_SYSPROP_t init_SYSCTL_SYSPROP(void);


#endif // _SYSPROP_h_

