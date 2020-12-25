/**********************************
* \file : PPLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPLCD_h_
#define _PPLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_PPLCD_BASE_ADDR	0x400FE390

// Structure Declaration
struct SYSCTL_PPLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPLCD_e, int32_t);

};

typedef struct SYSCTL_PPLCD_obj SYSCTL_PPLCD_t;

// Initializer
SYSCTL_PPLCD_t init_SYSCTL_PPLCD(void);


#endif // _PPLCD_h_

