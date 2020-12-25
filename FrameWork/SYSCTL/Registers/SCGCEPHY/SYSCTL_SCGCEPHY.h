/**********************************
* \file : SCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEPHY_h_
#define _SCGCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEPHY_BASE_ADDR	0x400FE730

// Structure Declaration
struct SYSCTL_SCGCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCEPHY_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCEPHY_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCEPHY_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCEPHY_e, int32_t);

};

typedef struct SYSCTL_SCGCEPHY_obj SYSCTL_SCGCEPHY_t;

// Initializer
SYSCTL_SCGCEPHY_t init_SYSCTL_SCGCEPHY(void);


#endif // _SCGCEPHY_h_

