/**********************************
* \file : SCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCADC_h_
#define _SCGCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCADC_BASE_ADDR	0x400FE738

// Structure Declaration
struct SYSCTL_SCGCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCADC_e, int32_t);

};

typedef struct SYSCTL_SCGCADC_obj SYSCTL_SCGCADC_t;

// Initializer
SYSCTL_SCGCADC_t init_SYSCTL_SCGCADC(void);


#endif // _SCGCADC_h_

