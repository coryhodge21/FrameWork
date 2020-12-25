/**********************************
* \file : PPCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPCAN_h_
#define _PPCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PPCAN_BASE_ADDR	0x400FE334

// Structure Declaration
struct SYSCTL_PPCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPCAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPCAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPCAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPCAN_e, int32_t);

};

typedef struct SYSCTL_PPCAN_obj SYSCTL_PPCAN_t;

// Initializer
SYSCTL_PPCAN_t init_SYSCTL_PPCAN(void);


#endif // _PPCAN_h_

