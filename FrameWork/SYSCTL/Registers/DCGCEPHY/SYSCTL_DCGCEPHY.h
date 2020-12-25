/**********************************
* \file : DCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEPHY_h_
#define _DCGCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEPHY_BASE_ADDR	0x400FE830

// Structure Declaration
struct SYSCTL_DCGCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCEPHY_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCEPHY_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCEPHY_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCEPHY_e, int32_t);

};

typedef struct SYSCTL_DCGCEPHY_obj SYSCTL_DCGCEPHY_t;

// Initializer
SYSCTL_DCGCEPHY_t init_SYSCTL_DCGCEPHY(void);


#endif // _DCGCEPHY_h_

