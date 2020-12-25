/**********************************
* \file : DCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCWD_h_
#define _DCGCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCWD_BASE_ADDR	0x400FE800

// Structure Declaration
struct SYSCTL_DCGCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCWD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCWD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCWD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCWD_e, int32_t);

};

typedef struct SYSCTL_DCGCWD_obj SYSCTL_DCGCWD_t;

// Initializer
SYSCTL_DCGCWD_t init_SYSCTL_DCGCWD(void);


#endif // _DCGCWD_h_

