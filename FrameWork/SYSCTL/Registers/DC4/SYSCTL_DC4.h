/**********************************
* \file : DC4.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC4_h_
#define _DC4_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC4_enums.h" 

// Base Address for this Register
#define SYSCTL_DC4_BASE_ADDR	0x400FE01C

// Structure Declaration
struct SYSCTL_DC4_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC4_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC4_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC4_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC4_e, int32_t);

};

typedef struct SYSCTL_DC4_obj SYSCTL_DC4_t;

// Initializer
SYSCTL_DC4_t init_SYSCTL_DC4(void);


#endif // _DC4_h_

