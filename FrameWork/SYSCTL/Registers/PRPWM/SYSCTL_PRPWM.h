/**********************************
* \file : PRPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRPWM_h_
#define _PRPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_PRPWM_BASE_ADDR	0x400FEA40

// Structure Declaration
struct SYSCTL_PRPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRPWM_e, int32_t);

};

typedef struct SYSCTL_PRPWM_obj SYSCTL_PRPWM_t;

// Initializer
SYSCTL_PRPWM_t init_SYSCTL_PRPWM(void);


#endif // _PRPWM_h_

