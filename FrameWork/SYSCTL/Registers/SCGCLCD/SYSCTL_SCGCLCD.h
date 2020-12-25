/**********************************
* \file : SCGCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCLCD_h_
#define _SCGCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCLCD_BASE_ADDR	0x400FE790

// Structure Declaration
struct SYSCTL_SCGCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCLCD_e, int32_t);

};

typedef struct SYSCTL_SCGCLCD_obj SYSCTL_SCGCLCD_t;

// Initializer
SYSCTL_SCGCLCD_t init_SYSCTL_SCGCLCD(void);


#endif // _SCGCLCD_h_

