/**********************************
* \file : SRADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRADC_h_
#define _SRADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRADC_enums.h" 

// Base Address for this Register
#define SYSCTL_SRADC_BASE_ADDR	0x400FE538

// Structure Declaration
struct SYSCTL_SRADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRADC_e, int32_t);

};

typedef struct SYSCTL_SRADC_obj SYSCTL_SRADC_t;

// Initializer
SYSCTL_SRADC_t init_SYSCTL_SRADC(void);


#endif // _SRADC_h_

