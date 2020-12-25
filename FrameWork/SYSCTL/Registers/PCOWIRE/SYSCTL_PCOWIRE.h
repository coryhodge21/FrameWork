/**********************************
* \file : PCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCOWIRE_h_
#define _PCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_PCOWIRE_BASE_ADDR	0x400FE998

// Structure Declaration
struct SYSCTL_PCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCOWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCOWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCOWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCOWIRE_e, int32_t);

};

typedef struct SYSCTL_PCOWIRE_obj SYSCTL_PCOWIRE_t;

// Initializer
SYSCTL_PCOWIRE_t init_SYSCTL_PCOWIRE(void);


#endif // _PCOWIRE_h_

