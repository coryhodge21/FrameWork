/**********************************
* \file : PCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCADC_h_
#define _PCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_PCADC_BASE_ADDR	0x400FE938

// Structure Declaration
struct SYSCTL_PCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCADC_e, int32_t);

};

typedef struct SYSCTL_PCADC_obj SYSCTL_PCADC_t;

// Initializer
SYSCTL_PCADC_t init_SYSCTL_PCADC(void);


#endif // _PCADC_h_

