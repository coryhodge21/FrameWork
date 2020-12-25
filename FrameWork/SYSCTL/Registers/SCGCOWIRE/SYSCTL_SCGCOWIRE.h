/**********************************
* \file : SCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCOWIRE_h_
#define _SCGCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCOWIRE_BASE_ADDR	0x400FE798

// Structure Declaration
struct SYSCTL_SCGCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCOWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCOWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCOWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCOWIRE_e, int32_t);

};

typedef struct SYSCTL_SCGCOWIRE_obj SYSCTL_SCGCOWIRE_t;

// Initializer
SYSCTL_SCGCOWIRE_t init_SYSCTL_SCGCOWIRE(void);


#endif // _SCGCOWIRE_h_

