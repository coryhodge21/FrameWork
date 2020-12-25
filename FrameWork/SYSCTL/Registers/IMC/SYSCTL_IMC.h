/**********************************
* \file : IMC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IMC_h_
#define _IMC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_IMC_enums.h" 

// Base Address for this Register
#define SYSCTL_IMC_BASE_ADDR	0x400FE054

// Structure Declaration
struct SYSCTL_IMC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_IMC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_IMC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_IMC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_IMC_e, int32_t);

};

typedef struct SYSCTL_IMC_obj SYSCTL_IMC_t;

// Initializer
SYSCTL_IMC_t init_SYSCTL_IMC(void);


#endif // _IMC_h_

