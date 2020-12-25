/**********************************
* \file : DC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC0_h_
#define _DC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC0_enums.h" 

// Base Address for this Register
#define SYSCTL_DC0_BASE_ADDR	0x400FE008

// Structure Declaration
struct SYSCTL_DC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC0_e, int32_t);

};

typedef struct SYSCTL_DC0_obj SYSCTL_DC0_t;

// Initializer
SYSCTL_DC0_t init_SYSCTL_DC0(void);


#endif // _DC0_h_

