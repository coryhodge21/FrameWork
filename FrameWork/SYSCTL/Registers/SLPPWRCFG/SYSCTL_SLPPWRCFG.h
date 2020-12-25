/**********************************
* \file : SLPPWRCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SLPPWRCFG_h_
#define _SLPPWRCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SLPPWRCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_SLPPWRCFG_BASE_ADDR	0x400FE188

// Structure Declaration
struct SYSCTL_SLPPWRCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SLPPWRCFG_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SLPPWRCFG_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SLPPWRCFG_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SLPPWRCFG_e, int32_t);

};

typedef struct SYSCTL_SLPPWRCFG_obj SYSCTL_SLPPWRCFG_t;

// Initializer
SYSCTL_SLPPWRCFG_t init_SYSCTL_SLPPWRCFG(void);


#endif // _SLPPWRCFG_h_

