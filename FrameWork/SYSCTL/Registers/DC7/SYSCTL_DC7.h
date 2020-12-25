/**********************************
* \file : DC7.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC7_h_
#define _DC7_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC7_enums.h" 

// Base Address for this Register
#define SYSCTL_DC7_BASE_ADDR	0x400FE028

// Structure Declaration
struct SYSCTL_DC7_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DC7_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DC7_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DC7_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DC7_e, int32_t);

};

typedef struct SYSCTL_DC7_obj SYSCTL_DC7_t;

// Initializer
SYSCTL_DC7_t init_SYSCTL_DC7(void);


#endif // _DC7_h_

