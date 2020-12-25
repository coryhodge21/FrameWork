/**********************************
* \file : RCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCPWM_h_
#define _RCGCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCPWM_BASE_ADDR	0x400FE640

// Structure Declaration
struct SYSCTL_RCGCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCPWM_e, int32_t);

};

typedef struct SYSCTL_RCGCPWM_obj SYSCTL_RCGCPWM_t;

// Initializer
SYSCTL_RCGCPWM_t init_SYSCTL_RCGCPWM(void);


#endif // _RCGCPWM_h_

