/**********************************
* \file : PREPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREPHY_h_
#define _PREPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_PREPHY_BASE_ADDR	0x400FEA30

// Structure Declaration
struct SYSCTL_PREPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PREPHY_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PREPHY_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PREPHY_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PREPHY_e, int32_t);

};

typedef struct SYSCTL_PREPHY_obj SYSCTL_PREPHY_t;

// Initializer
SYSCTL_PREPHY_t init_SYSCTL_PREPHY(void);


#endif // _PREPHY_h_

