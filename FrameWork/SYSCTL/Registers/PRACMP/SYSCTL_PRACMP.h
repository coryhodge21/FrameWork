/**********************************
* \file : PRACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRACMP_h_
#define _PRACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_PRACMP_BASE_ADDR	0x400FEA3C

// Structure Declaration
struct SYSCTL_PRACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRACMP_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRACMP_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRACMP_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRACMP_e, int32_t);

};

typedef struct SYSCTL_PRACMP_obj SYSCTL_PRACMP_t;

// Initializer
SYSCTL_PRACMP_t init_SYSCTL_PRACMP(void);


#endif // _PRACMP_h_

