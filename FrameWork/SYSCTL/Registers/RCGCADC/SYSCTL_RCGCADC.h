/**********************************
* \file : RCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCADC_h_
#define _RCGCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCADC_BASE_ADDR	0x400FE638

// Structure Declaration
struct SYSCTL_RCGCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCADC_e, int32_t);

};

typedef struct SYSCTL_RCGCADC_obj SYSCTL_RCGCADC_t;

// Initializer
SYSCTL_RCGCADC_t init_SYSCTL_RCGCADC(void);


#endif // _RCGCADC_h_

