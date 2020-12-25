/**********************************
* \file : USBMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _USBMPC_h_
#define _USBMPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_USBMPC_enums.h" 

// Base Address for this Register
#define SYSCTL_USBMPC_BASE_ADDR	0x400FE284

// Structure Declaration
struct SYSCTL_USBMPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_USBMPC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_USBMPC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_USBMPC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_USBMPC_e, int32_t);

};

typedef struct SYSCTL_USBMPC_obj SYSCTL_USBMPC_t;

// Initializer
SYSCTL_USBMPC_t init_SYSCTL_USBMPC(void);


#endif // _USBMPC_h_

