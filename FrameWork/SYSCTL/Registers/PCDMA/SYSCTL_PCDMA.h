/**********************************
* \file : PCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCDMA_h_
#define _PCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_PCDMA_BASE_ADDR	0x400FE90C

// Structure Declaration
struct SYSCTL_PCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCDMA_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCDMA_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCDMA_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCDMA_e, int32_t);

};

typedef struct SYSCTL_PCDMA_obj SYSCTL_PCDMA_t;

// Initializer
SYSCTL_PCDMA_t init_SYSCTL_PCDMA(void);


#endif // _PCDMA_h_

