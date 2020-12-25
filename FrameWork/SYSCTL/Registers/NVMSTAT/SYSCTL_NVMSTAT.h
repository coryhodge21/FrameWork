/**********************************
* \file : NVMSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _NVMSTAT_h_
#define _NVMSTAT_h_

//! \brief Enumerations for this Register
#include "SYSCTL_NVMSTAT_enums.h" 

// Base Address for this Register
#define SYSCTL_NVMSTAT_BASE_ADDR	0x400FE1A0

// Structure Declaration
struct SYSCTL_NVMSTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_NVMSTAT_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_NVMSTAT_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_NVMSTAT_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_NVMSTAT_e, int32_t);

};

typedef struct SYSCTL_NVMSTAT_obj SYSCTL_NVMSTAT_t;

// Initializer
SYSCTL_NVMSTAT_t init_SYSCTL_NVMSTAT(void);


#endif // _NVMSTAT_h_

