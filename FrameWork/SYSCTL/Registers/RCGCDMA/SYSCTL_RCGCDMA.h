/**********************************
* \file : RCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCDMA_h_
#define _RCGCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCDMA_BASE_ADDR	0x400FE60C

// Structure Declaration
struct SYSCTL_RCGCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCDMA_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCDMA_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCDMA_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCDMA_e, int32_t);

};

typedef struct SYSCTL_RCGCDMA_obj SYSCTL_RCGCDMA_t;

// Initializer
SYSCTL_RCGCDMA_t init_SYSCTL_RCGCDMA(void);


#endif // _RCGCDMA_h_

