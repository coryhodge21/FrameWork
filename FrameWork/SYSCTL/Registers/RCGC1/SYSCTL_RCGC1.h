/**********************************
* \file : RCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC1_h_
#define _RCGC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGC1_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGC1_BASE_ADDR	0x400FE104

// Structure Declaration
struct SYSCTL_RCGC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(RCGC1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(RCGC1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t (*read)(RCGC1_e);

	// Write the Bits of this Register Masked by the enumeration
	void (*write)(RCGC1_e, int32_t);

};

typedef struct SYSCTL_RCGC1_obj SYSCTL_RCGC1_t;

// Initializer
SYSCTL_RCGC1_t init_SYSCTL_RCGC1(void);


#endif // _RCGC1_h_

