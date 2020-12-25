/**********************************
* \file : PPWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPWD_h_
#define _PPWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPWD_enums.h" 

// Base Address for this Register
#define SYSCTL_PPWD_BASE_ADDR	0x400FE300

// Structure Declaration
struct SYSCTL_PPWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPWD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPWD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPWD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPWD_e, int32_t);

};

typedef struct SYSCTL_PPWD_obj SYSCTL_PPWD_t;

// Initializer
SYSCTL_PPWD_t init_SYSCTL_PPWD(void);


#endif // _PPWD_h_

