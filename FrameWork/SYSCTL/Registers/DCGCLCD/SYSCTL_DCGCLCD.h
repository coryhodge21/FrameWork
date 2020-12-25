/**********************************
* \file : DCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCLCD_h_
#define _DCGCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCLCD_BASE_ADDR	0x400FE890

// Structure Declaration
struct SYSCTL_DCGCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCLCD_e, int32_t);

};

typedef struct SYSCTL_DCGCLCD_obj SYSCTL_DCGCLCD_t;

// Initializer
SYSCTL_DCGCLCD_t init_SYSCTL_DCGCLCD(void);


#endif // _DCGCLCD_h_

