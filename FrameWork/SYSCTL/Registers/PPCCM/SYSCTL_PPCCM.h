/**********************************
* \file : PPCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPCCM_h_
#define _PPCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_PPCCM_BASE_ADDR	0x400FE374

// Structure Declaration
struct SYSCTL_PPCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPCCM_e, int32_t);

};

typedef struct SYSCTL_PPCCM_obj SYSCTL_PPCCM_t;

// Initializer
SYSCTL_PPCCM_t init_SYSCTL_PPCCM(void);


#endif // _PPCCM_h_

