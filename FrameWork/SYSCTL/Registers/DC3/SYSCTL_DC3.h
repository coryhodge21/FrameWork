/**********************************
* \file : DC3.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC3_h_
#define _DC3_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC3_enums.h" 

// Base Address for this Register
#define SYSCTL_DC3_BASE_ADDR	0x400FE018

// Structure Declaration
struct SYSCTL_DC3_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC3_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC3_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC3_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC3_e, int32_t);

};

typedef struct SYSCTL_DC3_obj SYSCTL_DC3_t;

// Initializer
SYSCTL_DC3_t init_SYSCTL_DC3(void);


#endif // _DC3_h_

