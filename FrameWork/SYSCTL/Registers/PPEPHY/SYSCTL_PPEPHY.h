/**********************************
* \file : PPEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEPHY_h_
#define _PPEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEPHY_BASE_ADDR	0x400FE330

// Structure Declaration
struct SYSCTL_PPEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPEPHY_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPEPHY_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPEPHY_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPEPHY_e, int32_t);

};

typedef struct SYSCTL_PPEPHY_obj SYSCTL_PPEPHY_t;

// Initializer
SYSCTL_PPEPHY_t init_SYSCTL_PPEPHY(void);


#endif // _PPEPHY_h_

