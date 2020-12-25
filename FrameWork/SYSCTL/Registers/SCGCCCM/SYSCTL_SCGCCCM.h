/**********************************
* \file : SCGCCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCCCM_h_
#define _SCGCCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCCCM_BASE_ADDR	0x400FE774

// Structure Declaration
struct SYSCTL_SCGCCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCCCM_e, int32_t);

};

typedef struct SYSCTL_SCGCCCM_obj SYSCTL_SCGCCCM_t;

// Initializer
SYSCTL_SCGCCCM_t init_SYSCTL_SCGCCCM(void);


#endif // _SCGCCCM_h_

