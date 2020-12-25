/**********************************
* \file : DCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCOWIRE_h_
#define _DCGCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCOWIRE_BASE_ADDR	0x400FE898

// Structure Declaration
struct SYSCTL_DCGCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCOWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCOWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCOWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCOWIRE_e, int32_t);

};

typedef struct SYSCTL_DCGCOWIRE_obj SYSCTL_DCGCOWIRE_t;

// Initializer
SYSCTL_DCGCOWIRE_t init_SYSCTL_DCGCOWIRE(void);


#endif // _DCGCOWIRE_h_

