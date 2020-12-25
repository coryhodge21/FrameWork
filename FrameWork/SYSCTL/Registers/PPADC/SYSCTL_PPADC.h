/**********************************
* \file : PPADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPADC_h_
#define _PPADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPADC_enums.h" 

// Base Address for this Register
#define SYSCTL_PPADC_BASE_ADDR	0x400FE338

// Structure Declaration
struct SYSCTL_PPADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPADC_e, int32_t);

};

typedef struct SYSCTL_PPADC_obj SYSCTL_PPADC_t;

// Initializer
SYSCTL_PPADC_t init_SYSCTL_PPADC(void);


#endif // _PPADC_h_

