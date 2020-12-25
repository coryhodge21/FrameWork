/**********************************
* \file : NMIC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _NMIC_h_
#define _NMIC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_NMIC_enums.h" 

// Base Address for this Register
#define SYSCTL_NMIC_BASE_ADDR	0x400FE064

// Structure Declaration
struct SYSCTL_NMIC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_NMIC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_NMIC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_NMIC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_NMIC_e, int32_t);

};

typedef struct SYSCTL_NMIC_obj SYSCTL_NMIC_t;

// Initializer
SYSCTL_NMIC_t init_SYSCTL_NMIC(void);


#endif // _NMIC_h_

