/**********************************
* \file : RESBEHAVCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RESBEHAVCTL_h_
#define _RESBEHAVCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RESBEHAVCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_RESBEHAVCTL_BASE_ADDR	0x400FE1D8

// Structure Declaration
struct SYSCTL_RESBEHAVCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RESBEHAVCTL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RESBEHAVCTL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RESBEHAVCTL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RESBEHAVCTL_e, int32_t);

};

typedef struct SYSCTL_RESBEHAVCTL_obj SYSCTL_RESBEHAVCTL_t;

// Initializer
SYSCTL_RESBEHAVCTL_t init_SYSCTL_RESBEHAVCTL(void);


#endif // _RESBEHAVCTL_h_

