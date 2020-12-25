/**********************************
* \file : USBPDS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _USBPDS_h_
#define _USBPDS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_USBPDS_enums.h" 

// Base Address for this Register
#define SYSCTL_USBPDS_BASE_ADDR	0x400FE280

// Structure Declaration
struct SYSCTL_USBPDS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_USBPDS_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_USBPDS_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_USBPDS_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_USBPDS_e, int32_t);

};

typedef struct SYSCTL_USBPDS_obj SYSCTL_USBPDS_t;

// Initializer
SYSCTL_USBPDS_t init_SYSCTL_USBPDS(void);


#endif // _USBPDS_h_

