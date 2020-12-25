/**********************************
* \file : PRUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRUSB_h_
#define _PRUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_PRUSB_BASE_ADDR	0x400FEA28

// Structure Declaration
struct SYSCTL_PRUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRUSB_e, int32_t);

};

typedef struct SYSCTL_PRUSB_obj SYSCTL_PRUSB_t;

// Initializer
SYSCTL_PRUSB_t init_SYSCTL_PRUSB(void);


#endif // _PRUSB_h_

