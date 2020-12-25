/**********************************
* \file : SREMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREMAC_h_
#define _SREMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_SREMAC_BASE_ADDR	0x400FE59C

// Structure Declaration
struct SYSCTL_SREMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SREMAC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SREMAC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SREMAC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SREMAC_e, int32_t);

};

typedef struct SYSCTL_SREMAC_obj SYSCTL_SREMAC_t;

// Initializer
SYSCTL_SREMAC_t init_SYSCTL_SREMAC(void);


#endif // _SREMAC_h_

