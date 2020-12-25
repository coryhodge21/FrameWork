/**********************************
* \file : PLLFREQ0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLFREQ0_h_
#define _PLLFREQ0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PLLFREQ0_enums.h" 

// Base Address for this Register
#define SYSCTL_PLLFREQ0_BASE_ADDR	0x400FE160

// Structure Declaration
struct SYSCTL_PLLFREQ0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PLLFREQ0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PLLFREQ0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PLLFREQ0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PLLFREQ0_e, int32_t);

};

typedef struct SYSCTL_PLLFREQ0_obj SYSCTL_PLLFREQ0_t;

// Initializer
SYSCTL_PLLFREQ0_t init_SYSCTL_PLLFREQ0(void);


#endif // _PLLFREQ0_h_

