/**********************************
* \file : DSLPCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSLPCLKCFG_h_
#define _DSLPCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DSLPCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_DSLPCLKCFG_BASE_ADDR	0x400FE144

// Structure Declaration
struct SYSCTL_DSLPCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DSLPCLKCFG_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DSLPCLKCFG_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DSLPCLKCFG_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DSLPCLKCFG_e, int32_t);

};

typedef struct SYSCTL_DSLPCLKCFG_obj SYSCTL_DSLPCLKCFG_t;

// Initializer
SYSCTL_DSLPCLKCFG_t init_SYSCTL_DSLPCLKCFG(void);


#endif // _DSLPCLKCFG_h_

