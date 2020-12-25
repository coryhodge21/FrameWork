/**********************************
* \file : SRLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRLCD_h_
#define _SRLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_SRLCD_BASE_ADDR	0x400FE590

// Structure Declaration
struct SYSCTL_SRLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRLCD_e, int32_t);

};

typedef struct SYSCTL_SRLCD_obj SYSCTL_SRLCD_t;

// Initializer
SYSCTL_SRLCD_t init_SYSCTL_SRLCD(void);


#endif // _SRLCD_h_

