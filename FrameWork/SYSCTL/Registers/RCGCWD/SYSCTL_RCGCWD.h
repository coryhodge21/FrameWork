/**********************************
* \file : RCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCWD_h_
#define _RCGCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCWD_BASE_ADDR	0x400FE600

// Structure Declaration
struct SYSCTL_RCGCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCWD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCWD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCWD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCWD_e, int32_t);

};

typedef struct SYSCTL_RCGCWD_obj SYSCTL_RCGCWD_t;

// Initializer
SYSCTL_RCGCWD_t init_SYSCTL_RCGCWD(void);


#endif // _RCGCWD_h_

