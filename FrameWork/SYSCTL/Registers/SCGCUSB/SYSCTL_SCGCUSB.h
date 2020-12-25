/**********************************
* \file : SCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCUSB_h_
#define _SCGCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCUSB_BASE_ADDR	0x400FE728

// Structure Declaration
struct SYSCTL_SCGCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCUSB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCUSB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCUSB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCUSB_e, int32_t);

};

typedef struct SYSCTL_SCGCUSB_obj SYSCTL_SCGCUSB_t;

// Initializer
SYSCTL_SCGCUSB_t init_SYSCTL_SCGCUSB(void);


#endif // _SCGCUSB_h_

