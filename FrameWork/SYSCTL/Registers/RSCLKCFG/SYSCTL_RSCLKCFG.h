/**********************************
* \file : RSCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RSCLKCFG_h_
#define _RSCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RSCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_RSCLKCFG_BASE_ADDR	0x400FE0B0

// Structure Declaration
struct SYSCTL_RSCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RSCLKCFG_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RSCLKCFG_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RSCLKCFG_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RSCLKCFG_e, int32_t);

};

typedef struct SYSCTL_RSCLKCFG_obj SYSCTL_RSCLKCFG_t;

// Initializer
SYSCTL_RSCLKCFG_t init_SYSCTL_RSCLKCFG(void);


#endif // _RSCLKCFG_h_

