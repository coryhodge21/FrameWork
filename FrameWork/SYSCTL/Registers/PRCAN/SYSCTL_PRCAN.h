/**********************************
* \file : PRCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRCAN_h_
#define _PRCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PRCAN_BASE_ADDR	0x400FEA34

// Structure Declaration
struct SYSCTL_PRCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRCAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRCAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRCAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRCAN_e, int32_t);

};

typedef struct SYSCTL_PRCAN_obj SYSCTL_PRCAN_t;

// Initializer
SYSCTL_PRCAN_t init_SYSCTL_PRCAN(void);


#endif // _PRCAN_h_

