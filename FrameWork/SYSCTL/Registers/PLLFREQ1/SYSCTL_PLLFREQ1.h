/**********************************
* \file : PLLFREQ1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLFREQ1_h_
#define _PLLFREQ1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PLLFREQ1_enums.h" 

// Base Address for this Register
#define SYSCTL_PLLFREQ1_BASE_ADDR	0x400FE164

// Structure Declaration
struct SYSCTL_PLLFREQ1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PLLFREQ1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PLLFREQ1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PLLFREQ1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PLLFREQ1_e, int32_t);

};

typedef struct SYSCTL_PLLFREQ1_obj SYSCTL_PLLFREQ1_t;

// Initializer
SYSCTL_PLLFREQ1_t init_SYSCTL_PLLFREQ1(void);


#endif // _PLLFREQ1_h_

