/**********************************
* \file : PWRTC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PWRTC_h_
#define _PWRTC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PWRTC_enums.h" 

// Base Address for this Register
#define SYSCTL_PWRTC_BASE_ADDR	0x400FE060

// Structure Declaration
struct SYSCTL_PWRTC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PWRTC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PWRTC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PWRTC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PWRTC_e, int32_t);

};

typedef struct SYSCTL_PWRTC_obj SYSCTL_PWRTC_t;

// Initializer
SYSCTL_PWRTC_t init_SYSCTL_PWRTC(void);


#endif // _PWRTC_h_

