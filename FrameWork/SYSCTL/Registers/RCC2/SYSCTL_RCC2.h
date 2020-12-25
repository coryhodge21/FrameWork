/**********************************
* \file : RCC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCC2_h_
#define _RCC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCC2_enums.h" 

// Base Address for this Register
#define SYSCTL_RCC2_BASE_ADDR	0x400FE070

// Structure Declaration
struct SYSCTL_RCC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCC2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCC2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCC2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCC2_e, int32_t);

};

typedef struct SYSCTL_RCC2_obj SYSCTL_RCC2_t;

// Initializer
SYSCTL_RCC2_t init_SYSCTL_RCC2(void);


#endif // _RCC2_h_

