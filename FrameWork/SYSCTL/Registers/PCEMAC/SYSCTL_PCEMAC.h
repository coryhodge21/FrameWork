/**********************************
* \file : PCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEMAC_h_
#define _PCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_PCEMAC_BASE_ADDR	0x400FE99C

// Structure Declaration
struct SYSCTL_PCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCEMAC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCEMAC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCEMAC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCEMAC_e, int32_t);

};

typedef struct SYSCTL_PCEMAC_obj SYSCTL_PCEMAC_t;

// Initializer
SYSCTL_PCEMAC_t init_SYSCTL_PCEMAC(void);


#endif // _PCEMAC_h_

