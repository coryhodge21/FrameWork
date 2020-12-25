/**********************************
* \file : RCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCLCD_h_
#define _RCGCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCLCD_BASE_ADDR	0x400FE690

// Structure Declaration
struct SYSCTL_RCGCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCLCD_e, int32_t);

};

typedef struct SYSCTL_RCGCLCD_obj SYSCTL_RCGCLCD_t;

// Initializer
SYSCTL_RCGCLCD_t init_SYSCTL_RCGCLCD(void);


#endif // _RCGCLCD_h_

