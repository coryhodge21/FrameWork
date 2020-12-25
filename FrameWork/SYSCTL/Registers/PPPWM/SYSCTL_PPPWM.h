/**********************************
* \file : PPPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPPWM_h_
#define _PPPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_PPPWM_BASE_ADDR	0x400FE340

// Structure Declaration
struct SYSCTL_PPPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPPWM_e, int32_t);

};

typedef struct SYSCTL_PPPWM_obj SYSCTL_PPPWM_t;

// Initializer
SYSCTL_PPPWM_t init_SYSCTL_PPPWM(void);


#endif // _PPPWM_h_

