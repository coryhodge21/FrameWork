/**********************************
* \file : LDOSPCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LDOSPCTL_h_
#define _LDOSPCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_LDOSPCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_LDOSPCTL_BASE_ADDR	0x400FE1B4

// Structure Declaration
struct SYSCTL_LDOSPCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_LDOSPCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_LDOSPCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_LDOSPCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_LDOSPCTL_e, int32_t);

};

typedef struct SYSCTL_LDOSPCTL_obj SYSCTL_LDOSPCTL_t;

// Initializer
SYSCTL_LDOSPCTL_t init_SYSCTL_LDOSPCTL(void);


#endif // _LDOSPCTL_h_

