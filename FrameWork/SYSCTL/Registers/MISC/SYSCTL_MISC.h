/**********************************
* \file : MISC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MISC_h_
#define _MISC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_MISC_enums.h" 

// Base Address for this Register
#define SYSCTL_MISC_BASE_ADDR	0x400FE058

// Structure Declaration
struct SYSCTL_MISC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_MISC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_MISC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_MISC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_MISC_e, int32_t);

};

typedef struct SYSCTL_MISC_obj SYSCTL_MISC_t;

// Initializer
SYSCTL_MISC_t init_SYSCTL_MISC(void);


#endif // _MISC_h_

