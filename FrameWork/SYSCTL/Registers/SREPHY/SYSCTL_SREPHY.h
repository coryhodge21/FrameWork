/**********************************
* \file : SREPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREPHY_h_
#define _SREPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_SREPHY_BASE_ADDR	0x400FE530

// Structure Declaration
struct SYSCTL_SREPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SREPHY_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SREPHY_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SREPHY_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SREPHY_e, int32_t);

};

typedef struct SYSCTL_SREPHY_obj SYSCTL_SREPHY_t;

// Initializer
SYSCTL_SREPHY_t init_SYSCTL_SREPHY(void);


#endif // _SREPHY_h_

