/**********************************
* \file : PIOSCSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PIOSCSTAT_h_
#define _PIOSCSTAT_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PIOSCSTAT_enums.h" 

// Base Address for this Register
#define SYSCTL_PIOSCSTAT_BASE_ADDR	0x400FE154

// Structure Declaration
struct SYSCTL_PIOSCSTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PIOSCSTAT_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PIOSCSTAT_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PIOSCSTAT_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PIOSCSTAT_e, int32_t);

};

typedef struct SYSCTL_PIOSCSTAT_obj SYSCTL_PIOSCSTAT_t;

// Initializer
SYSCTL_PIOSCSTAT_t init_SYSCTL_PIOSCSTAT(void);


#endif // _PIOSCSTAT_h_

