/**********************************
* \file : PCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCHIB_h_
#define _PCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_PCHIB_BASE_ADDR	0x400FE914

// Structure Declaration
struct SYSCTL_PCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCHIB_e, int32_t);

};

typedef struct SYSCTL_PCHIB_obj SYSCTL_PCHIB_t;

// Initializer
SYSCTL_PCHIB_t init_SYSCTL_PCHIB(void);


#endif // _PCHIB_h_

