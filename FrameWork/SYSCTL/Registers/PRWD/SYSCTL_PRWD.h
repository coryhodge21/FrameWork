/**********************************
* \file : PRWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRWD_h_
#define _PRWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRWD_enums.h" 

// Base Address for this Register
#define SYSCTL_PRWD_BASE_ADDR	0x400FEA00

// Structure Declaration
struct SYSCTL_PRWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRWD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRWD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRWD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRWD_e, int32_t);

};

typedef struct SYSCTL_PRWD_obj SYSCTL_PRWD_t;

// Initializer
SYSCTL_PRWD_t init_SYSCTL_PRWD(void);


#endif // _PRWD_h_

