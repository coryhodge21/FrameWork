/**********************************
* \file : DCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEMAC_h_
#define _DCGCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEMAC_BASE_ADDR	0x400FE89C

// Structure Declaration
struct SYSCTL_DCGCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCEMAC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCEMAC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCEMAC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCEMAC_e, int32_t);

};

typedef struct SYSCTL_DCGCEMAC_obj SYSCTL_DCGCEMAC_t;

// Initializer
SYSCTL_DCGCEMAC_t init_SYSCTL_DCGCEMAC(void);


#endif // _DCGCEMAC_h_

