/**********************************
* \file : PRDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRDMA_h_
#define _PRDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_PRDMA_BASE_ADDR	0x400FEA0C

// Structure Declaration
struct SYSCTL_PRDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRDMA_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRDMA_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRDMA_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRDMA_e, int32_t);

};

typedef struct SYSCTL_PRDMA_obj SYSCTL_PRDMA_t;

// Initializer
SYSCTL_PRDMA_t init_SYSCTL_PRDMA(void);


#endif // _PRDMA_h_

