/**********************************
* \file : RCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCOWIRE_h_
#define _RCGCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCOWIRE_BASE_ADDR	0x400FE698

// Structure Declaration
struct SYSCTL_RCGCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCOWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCOWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCOWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCOWIRE_e, int32_t);

};

typedef struct SYSCTL_RCGCOWIRE_obj SYSCTL_RCGCOWIRE_t;

// Initializer
SYSCTL_RCGCOWIRE_t init_SYSCTL_RCGCOWIRE(void);


#endif // _RCGCOWIRE_h_

