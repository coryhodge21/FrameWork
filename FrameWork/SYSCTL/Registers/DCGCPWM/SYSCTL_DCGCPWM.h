/**********************************
* \file : DCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCPWM_h_
#define _DCGCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCPWM_BASE_ADDR	0x400FE840

// Structure Declaration
struct SYSCTL_DCGCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCPWM_e, int32_t);

};

typedef struct SYSCTL_DCGCPWM_obj SYSCTL_DCGCPWM_t;

// Initializer
SYSCTL_DCGCPWM_t init_SYSCTL_DCGCPWM(void);


#endif // _DCGCPWM_h_

