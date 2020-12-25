/**********************************
* \file : PREMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREMAC_h_
#define _PREMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_PREMAC_BASE_ADDR	0x400FEA9C

// Structure Declaration
struct SYSCTL_PREMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PREMAC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PREMAC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PREMAC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PREMAC_e, int32_t);

};

typedef struct SYSCTL_PREMAC_obj SYSCTL_PREMAC_t;

// Initializer
SYSCTL_PREMAC_t init_SYSCTL_PREMAC(void);


#endif // _PREMAC_h_

