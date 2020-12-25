/**********************************
* \file : DC9.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC9_h_
#define _DC9_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC9_enums.h" 

// Base Address for this Register
#define SYSCTL_DC9_BASE_ADDR	0x400FE190

// Structure Declaration
struct SYSCTL_DC9_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC9_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC9_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC9_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC9_e, int32_t);

};

typedef struct SYSCTL_DC9_obj SYSCTL_DC9_t;

// Initializer
SYSCTL_DC9_t init_SYSCTL_DC9(void);


#endif // _DC9_h_

