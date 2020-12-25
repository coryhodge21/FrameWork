/**********************************
* \file : PRCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRCCM_h_
#define _PRCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_PRCCM_BASE_ADDR	0x400FEA74

// Structure Declaration
struct SYSCTL_PRCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRCCM_e, int32_t);

};

typedef struct SYSCTL_PRCCM_obj SYSCTL_PRCCM_t;

// Initializer
SYSCTL_PRCCM_t init_SYSCTL_PRCCM(void);


#endif // _PRCCM_h_

