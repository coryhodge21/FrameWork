/**********************************
* \file : PCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCUSB_h_
#define _PCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_PCUSB_BASE_ADDR	0x400FE928

// Structure Declaration
struct SYSCTL_PCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCUSB_e, int32_t);

};

typedef struct SYSCTL_PCUSB_obj SYSCTL_PCUSB_t;

// Initializer
SYSCTL_PCUSB_t init_SYSCTL_PCUSB(void);


#endif // _PCUSB_h_

