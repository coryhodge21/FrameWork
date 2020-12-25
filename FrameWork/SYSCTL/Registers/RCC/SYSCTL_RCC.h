/**********************************
* \file : RCC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCC_h_
#define _RCC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCC_enums.h" 

// Base Address for this Register
#define SYSCTL_RCC_BASE_ADDR	0x400FE060

// Structure Declaration
struct SYSCTL_RCC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCC_e, int32_t);

};

typedef struct SYSCTL_RCC_obj SYSCTL_RCC_t;

// Initializer
SYSCTL_RCC_t init_SYSCTL_RCC(void);


#endif // _RCC_h_

