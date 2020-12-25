/**********************************
* \file : DCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCI2C_h_
#define _DCGCI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCI2C_BASE_ADDR	0x400FE820

// Structure Declaration
struct SYSCTL_DCGCI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCI2C_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCI2C_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCI2C_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCI2C_e, int32_t);

};

typedef struct SYSCTL_DCGCI2C_obj SYSCTL_DCGCI2C_t;

// Initializer
SYSCTL_DCGCI2C_t init_SYSCTL_DCGCI2C(void);


#endif // _DCGCI2C_h_

