/**********************************
* \file : DC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC1_h_
#define _DC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC1_enums.h" 

// Base Address for this Register
#define SYSCTL_DC1_BASE_ADDR	0x400FE010

// Structure Declaration
struct SYSCTL_DC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC1_e, int32_t);

};

typedef struct SYSCTL_DC1_obj SYSCTL_DC1_t;

// Initializer
SYSCTL_DC1_t init_SYSCTL_DC1(void);


#endif // _DC1_h_

