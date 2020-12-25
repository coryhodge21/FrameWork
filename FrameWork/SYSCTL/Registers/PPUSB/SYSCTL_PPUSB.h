/**********************************
* \file : PPUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPUSB_h_
#define _PPUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_PPUSB_BASE_ADDR	0x400FE328

// Structure Declaration
struct SYSCTL_PPUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPUSB_e, int32_t);

};

typedef struct SYSCTL_PPUSB_obj SYSCTL_PPUSB_t;

// Initializer
SYSCTL_PPUSB_t init_SYSCTL_PPUSB(void);


#endif // _PPUSB_h_

