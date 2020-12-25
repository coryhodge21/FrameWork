/**********************************
* \file : SRSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRSSI_h_
#define _SRSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_SRSSI_BASE_ADDR	0x400FE51C

// Structure Declaration
struct SYSCTL_SRSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRSSI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRSSI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRSSI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRSSI_e, int32_t);

};

typedef struct SYSCTL_SRSSI_obj SYSCTL_SRSSI_t;

// Initializer
SYSCTL_SRSSI_t init_SYSCTL_SRSSI(void);


#endif // _SRSSI_h_

