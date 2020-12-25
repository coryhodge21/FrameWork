/**********************************
* \file : DCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCADC_h_
#define _DCGCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCADC_BASE_ADDR	0x400FE838

// Structure Declaration
struct SYSCTL_DCGCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCADC_e, int32_t);

};

typedef struct SYSCTL_DCGCADC_obj SYSCTL_DCGCADC_t;

// Initializer
SYSCTL_DCGCADC_t init_SYSCTL_DCGCADC(void);


#endif // _DCGCADC_h_

