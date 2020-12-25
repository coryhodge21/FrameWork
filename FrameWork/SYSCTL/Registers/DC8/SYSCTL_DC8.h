/**********************************
* \file : DC8.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC8_h_
#define _DC8_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC8_enums.h" 

// Base Address for this Register
#define SYSCTL_DC8_BASE_ADDR	0x400FE02C

// Structure Declaration
struct SYSCTL_DC8_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC8_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC8_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC8_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC8_e, int32_t);

};

typedef struct SYSCTL_DC8_obj SYSCTL_DC8_t;

// Initializer
SYSCTL_DC8_t init_SYSCTL_DC8(void);


#endif // _DC8_h_

