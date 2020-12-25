/**********************************
* \file : PBORCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PBORCTL_h_
#define _PBORCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PBORCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_PBORCTL_BASE_ADDR	0x400FE030

// Structure Declaration
struct SYSCTL_PBORCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PBORCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PBORCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PBORCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PBORCTL_e, int32_t);

};

typedef struct SYSCTL_PBORCTL_obj SYSCTL_PBORCTL_t;

// Initializer
SYSCTL_PBORCTL_t init_SYSCTL_PBORCTL(void);


#endif // _PBORCTL_h_

