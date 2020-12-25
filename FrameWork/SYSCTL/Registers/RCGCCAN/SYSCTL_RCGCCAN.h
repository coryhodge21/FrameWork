/**********************************
* \file : RCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCCAN_h_
#define _RCGCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCCAN_BASE_ADDR	0x400FE634

// Structure Declaration
struct SYSCTL_RCGCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCCAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCCAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCCAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCCAN_e, int32_t);

};

typedef struct SYSCTL_RCGCCAN_obj SYSCTL_RCGCCAN_t;

// Initializer
SYSCTL_RCGCCAN_t init_SYSCTL_RCGCCAN(void);


#endif // _RCGCCAN_h_
