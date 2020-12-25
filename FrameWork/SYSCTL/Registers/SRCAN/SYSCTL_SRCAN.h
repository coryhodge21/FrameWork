/**********************************
* \file : SRCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCAN_h_
#define _SRCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCAN_BASE_ADDR	0x400FE534

// Structure Declaration
struct SYSCTL_SRCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRCAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRCAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRCAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRCAN_e, int32_t);

};

typedef struct SYSCTL_SRCAN_obj SYSCTL_SRCAN_t;

// Initializer
SYSCTL_SRCAN_t init_SYSCTL_SRCAN(void);


#endif // _SRCAN_h_

