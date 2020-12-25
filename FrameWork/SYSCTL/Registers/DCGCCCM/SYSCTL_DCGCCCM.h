/**********************************
* \file : DCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCCCM_h_
#define _DCGCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCCCM_BASE_ADDR	0x400FE874

// Structure Declaration
struct SYSCTL_DCGCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCCCM_e, int32_t);

};

typedef struct SYSCTL_DCGCCCM_obj SYSCTL_DCGCCCM_t;

// Initializer
SYSCTL_DCGCCCM_t init_SYSCTL_DCGCCCM(void);


#endif // _DCGCCCM_h_

