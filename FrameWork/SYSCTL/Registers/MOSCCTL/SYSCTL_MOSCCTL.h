/**********************************
* \file : MOSCCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MOSCCTL_h_
#define _MOSCCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_MOSCCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_MOSCCTL_BASE_ADDR	0x400FE07C

// Structure Declaration
struct SYSCTL_MOSCCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_MOSCCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_MOSCCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_MOSCCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_MOSCCTL_e, int32_t);

};

typedef struct SYSCTL_MOSCCTL_obj SYSCTL_MOSCCTL_t;

// Initializer
SYSCTL_MOSCCTL_t init_SYSCTL_MOSCCTL(void);


#endif // _MOSCCTL_h_

