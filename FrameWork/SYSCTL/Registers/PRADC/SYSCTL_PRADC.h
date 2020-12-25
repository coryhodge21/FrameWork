/**********************************
* \file : PRADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRADC_h_
#define _PRADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRADC_enums.h" 

// Base Address for this Register
#define SYSCTL_PRADC_BASE_ADDR	0x400FEA38

// Structure Declaration
struct SYSCTL_PRADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRADC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRADC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRADC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRADC_e, int32_t);

};

typedef struct SYSCTL_PRADC_obj SYSCTL_PRADC_t;

// Initializer
SYSCTL_PRADC_t init_SYSCTL_PRADC(void);


#endif // _PRADC_h_

