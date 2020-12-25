/**********************************
* \file : DCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCUSB_h_
#define _DCGCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCUSB_BASE_ADDR	0x400FE828

// Structure Declaration
struct SYSCTL_DCGCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCUSB_e, int32_t);

};

typedef struct SYSCTL_DCGCUSB_obj SYSCTL_DCGCUSB_t;

// Initializer
SYSCTL_DCGCUSB_t init_SYSCTL_DCGCUSB(void);


#endif // _DCGCUSB_h_

