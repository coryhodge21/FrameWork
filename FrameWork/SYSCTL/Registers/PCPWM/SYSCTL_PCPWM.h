/**********************************
* \file : PCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCPWM_h_
#define _PCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_PCPWM_BASE_ADDR	0x400FE940

// Structure Declaration
struct SYSCTL_PCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCPWM_e, int32_t);

};

typedef struct SYSCTL_PCPWM_obj SYSCTL_PCPWM_t;

// Initializer
SYSCTL_PCPWM_t init_SYSCTL_PCPWM(void);


#endif // _PCPWM_h_

