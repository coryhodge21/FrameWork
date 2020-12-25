/**********************************
* \file : RCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCUSB_h_
#define _RCGCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCUSB_BASE_ADDR	0x400FE628

// Structure Declaration
struct SYSCTL_RCGCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCUSB_e, int32_t);

};

typedef struct SYSCTL_RCGCUSB_obj SYSCTL_RCGCUSB_t;

// Initializer
SYSCTL_RCGCUSB_t init_SYSCTL_RCGCUSB(void);


#endif // _RCGCUSB_h_

