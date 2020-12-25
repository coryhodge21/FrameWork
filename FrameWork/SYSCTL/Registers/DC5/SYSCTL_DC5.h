/**********************************
* \file : DC5.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC5_h_
#define _DC5_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC5_enums.h" 

// Base Address for this Register
#define SYSCTL_DC5_BASE_ADDR	0x400FE020

// Structure Declaration
struct SYSCTL_DC5_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC5_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC5_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC5_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC5_e, int32_t);

};

typedef struct SYSCTL_DC5_obj SYSCTL_DC5_t;

// Initializer
SYSCTL_DC5_t init_SYSCTL_DC5(void);


#endif // _DC5_h_

