/**********************************
* \file : DC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC2_h_
#define _DC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC2_enums.h" 

// Base Address for this Register
#define SYSCTL_DC2_BASE_ADDR	0x400FE014

// Structure Declaration
struct SYSCTL_DC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC2_e, int32_t);

};

typedef struct SYSCTL_DC2_obj SYSCTL_DC2_t;

// Initializer
SYSCTL_DC2_t init_SYSCTL_DC2(void);


#endif // _DC2_h_
