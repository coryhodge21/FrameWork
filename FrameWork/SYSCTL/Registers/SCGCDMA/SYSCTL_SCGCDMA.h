/**********************************
* \file : SCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCDMA_h_
#define _SCGCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCDMA_BASE_ADDR	0x400FE70C

// Structure Declaration
struct SYSCTL_SCGCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCDMA_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCDMA_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCDMA_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCDMA_e, int32_t);

};

typedef struct SYSCTL_SCGCDMA_obj SYSCTL_SCGCDMA_t;

// Initializer
SYSCTL_SCGCDMA_t init_SYSCTL_SCGCDMA(void);


#endif // _SCGCDMA_h_

