/**********************************
* \file : SCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCSSI_h_
#define _SCGCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCSSI_BASE_ADDR	0x400FE71C

// Structure Declaration
struct SYSCTL_SCGCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCSSI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCSSI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCSSI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCSSI_e, int32_t);

};

typedef struct SYSCTL_SCGCSSI_obj SYSCTL_SCGCSSI_t;

// Initializer
SYSCTL_SCGCSSI_t init_SYSCTL_SCGCSSI(void);


#endif // _SCGCSSI_h_

