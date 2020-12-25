/**********************************
* \file : SRPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRPWM_h_
#define _SRPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_SRPWM_BASE_ADDR	0x400FE540

// Structure Declaration
struct SYSCTL_SRPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRPWM_e, int32_t);

};

typedef struct SYSCTL_SRPWM_obj SYSCTL_SRPWM_t;

// Initializer
SYSCTL_SRPWM_t init_SYSCTL_SRPWM(void);


#endif // _SRPWM_h_

