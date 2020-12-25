/**********************************
* \file : RCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCI2C_h_
#define _RCGCI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCI2C_BASE_ADDR	0x400FE620

// Structure Declaration
struct SYSCTL_RCGCI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCI2C_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCI2C_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCI2C_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCI2C_e, int32_t);

};

typedef struct SYSCTL_RCGCI2C_obj SYSCTL_RCGCI2C_t;

// Initializer
SYSCTL_RCGCI2C_t init_SYSCTL_RCGCI2C(void);


#endif // _RCGCI2C_h_

