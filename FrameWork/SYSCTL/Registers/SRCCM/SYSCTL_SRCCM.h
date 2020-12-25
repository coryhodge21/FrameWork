/**********************************
* \file : SRCCM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCCM_h_
#define _SRCCM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCCM_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCCM_BASE_ADDR	0x400FE574

// Structure Declaration
struct SYSCTL_SRCCM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRCCM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRCCM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRCCM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRCCM_e, int32_t);

};

typedef struct SYSCTL_SRCCM_obj SYSCTL_SRCCM_t;

// Initializer
SYSCTL_SRCCM_t init_SYSCTL_SRCCM(void);


#endif // _SRCCM_h_

