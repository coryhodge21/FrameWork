/**********************************
* \file : PLLSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLSTAT_h_
#define _PLLSTAT_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PLLSTAT_enums.h" 

// Base Address for this Register
#define SYSCTL_PLLSTAT_BASE_ADDR	0x400FE168

// Structure Declaration
struct SYSCTL_PLLSTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PLLSTAT_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PLLSTAT_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PLLSTAT_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PLLSTAT_e, int32_t);

};

typedef struct SYSCTL_PLLSTAT_obj SYSCTL_PLLSTAT_t;

// Initializer
SYSCTL_PLLSTAT_t init_SYSCTL_PLLSTAT(void);


#endif // _PLLSTAT_h_

