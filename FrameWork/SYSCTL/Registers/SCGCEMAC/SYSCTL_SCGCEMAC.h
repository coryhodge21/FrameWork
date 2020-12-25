/**********************************
* \file : SCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEMAC_h_
#define _SCGCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEMAC_BASE_ADDR	0x400FE79C

// Structure Declaration
struct SYSCTL_SCGCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCEMAC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCEMAC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCEMAC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCEMAC_e, int32_t);

};

typedef struct SYSCTL_SCGCEMAC_obj SYSCTL_SCGCEMAC_t;

// Initializer
SYSCTL_SCGCEMAC_t init_SYSCTL_SCGCEMAC(void);


#endif // _SCGCEMAC_h_

