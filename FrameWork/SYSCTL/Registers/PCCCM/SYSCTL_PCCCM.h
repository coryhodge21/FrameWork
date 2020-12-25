/**********************************
* \file : PCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCCCM_h_
#define _PCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_PCCCM_BASE_ADDR	0x400FE974

// Structure Declaration
struct SYSCTL_PCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCCCM_e, int32_t);

};

typedef struct SYSCTL_PCCCM_obj SYSCTL_PCCCM_t;

// Initializer
SYSCTL_PCCCM_t init_SYSCTL_PCCCM(void);


#endif // _PCCCM_h_

