/**********************************
* \file : GPIOHBCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _GPIOHBCTL_h_
#define _GPIOHBCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_GPIOHBCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_GPIOHBCTL_BASE_ADDR	0x400FE06C

// Structure Declaration
struct SYSCTL_GPIOHBCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_GPIOHBCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_GPIOHBCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_GPIOHBCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_GPIOHBCTL_e, int32_t);

};

typedef struct SYSCTL_GPIOHBCTL_obj SYSCTL_GPIOHBCTL_t;

// Initializer
SYSCTL_GPIOHBCTL_t init_SYSCTL_GPIOHBCTL(void);


#endif // _GPIOHBCTL_h_

