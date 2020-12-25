/**********************************
* \file : DCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCCAN_h_
#define _DCGCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCCAN_BASE_ADDR	0x400FE834

// Structure Declaration
struct SYSCTL_DCGCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCCAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCCAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCCAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCCAN_e, int32_t);

};

typedef struct SYSCTL_DCGCCAN_obj SYSCTL_DCGCCAN_t;

// Initializer
SYSCTL_DCGCCAN_t init_SYSCTL_DCGCCAN(void);


#endif // _DCGCCAN_h_

