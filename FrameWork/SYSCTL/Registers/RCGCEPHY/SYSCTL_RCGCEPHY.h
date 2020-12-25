/**********************************
* \file : RCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEPHY_h_
#define _RCGCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCEPHY_BASE_ADDR	0x400FE630

// Structure Declaration
struct SYSCTL_RCGCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCEPHY_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCEPHY_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCEPHY_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCEPHY_e, int32_t);

};

typedef struct SYSCTL_RCGCEPHY_obj SYSCTL_RCGCEPHY_t;

// Initializer
SYSCTL_RCGCEPHY_t init_SYSCTL_RCGCEPHY(void);


#endif // _RCGCEPHY_h_

