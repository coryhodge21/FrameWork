/**********************************
* \file : PCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCSSI_h_
#define _PCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_PCSSI_BASE_ADDR	0x400FE91C

// Structure Declaration
struct SYSCTL_PCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCSSI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCSSI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCSSI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCSSI_e, int32_t);

};

typedef struct SYSCTL_PCSSI_obj SYSCTL_PCSSI_t;

// Initializer
SYSCTL_PCSSI_t init_SYSCTL_PCSSI(void);


#endif // _PCSSI_h_

