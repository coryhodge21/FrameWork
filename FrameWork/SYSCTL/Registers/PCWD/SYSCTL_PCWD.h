/**********************************
* \file : PCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCWD_h_
#define _PCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_PCWD_BASE_ADDR	0x400FE900

// Structure Declaration
struct SYSCTL_PCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCWD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCWD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCWD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCWD_e, int32_t);

};

typedef struct SYSCTL_PCWD_obj SYSCTL_PCWD_t;

// Initializer
SYSCTL_PCWD_t init_SYSCTL_PCWD(void);


#endif // _PCWD_h_

