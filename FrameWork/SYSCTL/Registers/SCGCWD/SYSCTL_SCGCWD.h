/**********************************
* \file : SCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCWD_h_
#define _SCGCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCWD_BASE_ADDR	0x400FE700

// Structure Declaration
struct SYSCTL_SCGCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCWD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCWD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCWD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCWD_e, int32_t);

};

typedef struct SYSCTL_SCGCWD_obj SYSCTL_SCGCWD_t;

// Initializer
SYSCTL_SCGCWD_t init_SYSCTL_SCGCWD(void);


#endif // _SCGCWD_h_

