/**********************************
* \file : SRUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRUSB_h_
#define _SRUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_SRUSB_BASE_ADDR	0x400FE528

// Structure Declaration
struct SYSCTL_SRUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRUSB_e, int32_t);

};

typedef struct SYSCTL_SRUSB_obj SYSCTL_SRUSB_t;

// Initializer
SYSCTL_SRUSB_t init_SYSCTL_SRUSB(void);


#endif // _SRUSB_h_

