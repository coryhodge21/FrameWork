/**********************************
* \file : SCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCPWM_h_
#define _SCGCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCPWM_BASE_ADDR	0x400FE740

// Structure Declaration
struct SYSCTL_SCGCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCPWM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCPWM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCPWM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCPWM_e, int32_t);

};

typedef struct SYSCTL_SCGCPWM_obj SYSCTL_SCGCPWM_t;

// Initializer
SYSCTL_SCGCPWM_t init_SYSCTL_SCGCPWM(void);


#endif // _SCGCPWM_h_

