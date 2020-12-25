/**********************************
* \file : DC6.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC6_h_
#define _DC6_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC6_enums.h" 

// Base Address for this Register
#define SYSCTL_DC6_BASE_ADDR	0x400FE024

// Structure Declaration
struct SYSCTL_DC6_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC6_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC6_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC6_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC6_e, int32_t);

};

typedef struct SYSCTL_DC6_obj SYSCTL_DC6_t;

// Initializer
SYSCTL_DC6_t init_SYSCTL_DC6(void);


#endif // _DC6_h_

