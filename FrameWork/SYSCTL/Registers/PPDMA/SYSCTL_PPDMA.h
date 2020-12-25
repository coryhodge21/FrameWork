/**********************************
* \file : PPDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPDMA_h_
#define _PPDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_PPDMA_BASE_ADDR	0x400FE30C

// Structure Declaration
struct SYSCTL_PPDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPDMA_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPDMA_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPDMA_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPDMA_e, int32_t);

};

typedef struct SYSCTL_PPDMA_obj SYSCTL_PPDMA_t;

// Initializer
SYSCTL_PPDMA_t init_SYSCTL_PPDMA(void);


#endif // _PPDMA_h_

