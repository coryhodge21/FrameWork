/**********************************
* \file : LDODPCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LDODPCTL_h_
#define _LDODPCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_LDODPCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_LDODPCTL_BASE_ADDR	0x400FE1BC

// Structure Declaration
struct SYSCTL_LDODPCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_LDODPCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_LDODPCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_LDODPCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_LDODPCTL_e, int32_t);

};

typedef struct SYSCTL_LDODPCTL_obj SYSCTL_LDODPCTL_t;

// Initializer
SYSCTL_LDODPCTL_t init_SYSCTL_LDODPCTL(void);


#endif // _LDODPCTL_h_

