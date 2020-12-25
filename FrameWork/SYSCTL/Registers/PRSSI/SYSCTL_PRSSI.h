/**********************************
* \file : PRSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRSSI_h_
#define _PRSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_PRSSI_BASE_ADDR	0x400FEA1C

// Structure Declaration
struct SYSCTL_PRSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRSSI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRSSI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRSSI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRSSI_e, int32_t);

};

typedef struct SYSCTL_PRSSI_obj SYSCTL_PRSSI_t;

// Initializer
SYSCTL_PRSSI_t init_SYSCTL_PRSSI(void);


#endif // _PRSSI_h_

