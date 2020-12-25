/**********************************
* \file : PTBOCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PTBOCTL_h_
#define _PTBOCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PTBOCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_PTBOCTL_BASE_ADDR	0x400FE038

// Structure Declaration
struct SYSCTL_PTBOCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PTBOCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PTBOCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PTBOCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PTBOCTL_e, int32_t);

};

typedef struct SYSCTL_PTBOCTL_obj SYSCTL_PTBOCTL_t;

// Initializer
SYSCTL_PTBOCTL_t init_SYSCTL_PTBOCTL(void);


#endif // _PTBOCTL_h_

