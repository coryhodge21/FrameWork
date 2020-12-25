/**********************************
* \file : RCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCCCM_h_
#define _RCGCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCCCM_BASE_ADDR	0x400FE674

// Structure Declaration
struct SYSCTL_RCGCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCCCM_e, int32_t);

};

typedef struct SYSCTL_RCGCCCM_obj SYSCTL_RCGCCCM_t;

// Initializer
SYSCTL_RCGCCCM_t init_SYSCTL_RCGCCCM(void);


#endif // _RCGCCCM_h_

