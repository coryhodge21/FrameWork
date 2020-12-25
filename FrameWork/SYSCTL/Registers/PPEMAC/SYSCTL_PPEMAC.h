/**********************************
* \file : PPEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEMAC_h_
#define _PPEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEMAC_BASE_ADDR	0x400FE39C

// Structure Declaration
struct SYSCTL_PPEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPEMAC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPEMAC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPEMAC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPEMAC_e, int32_t);

};

typedef struct SYSCTL_PPEMAC_obj SYSCTL_PPEMAC_t;

// Initializer
SYSCTL_PPEMAC_t init_SYSCTL_PPEMAC(void);


#endif // _PPEMAC_h_

