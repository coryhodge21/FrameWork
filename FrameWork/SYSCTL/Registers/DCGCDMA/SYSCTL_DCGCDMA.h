/**********************************
* \file : DCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCDMA_h_
#define _DCGCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCDMA_BASE_ADDR	0x400FE80C

// Structure Declaration
struct SYSCTL_DCGCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCDMA_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCDMA_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCDMA_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCDMA_e, int32_t);

};

typedef struct SYSCTL_DCGCDMA_obj SYSCTL_DCGCDMA_t;

// Initializer
SYSCTL_DCGCDMA_t init_SYSCTL_DCGCDMA(void);


#endif // _DCGCDMA_h_

