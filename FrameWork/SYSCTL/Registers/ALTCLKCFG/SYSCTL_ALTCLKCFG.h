/**********************************
* \file : ALTCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _ALTCLKCFG_h_
#define _ALTCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_ALTCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_ALTCLKCFG_BASE_ADDR	0x400FE138

// Structure Declaration
struct SYSCTL_ALTCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_ALTCLKCFG_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_ALTCLKCFG_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_ALTCLKCFG_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_ALTCLKCFG_e, int32_t);

};

typedef struct SYSCTL_ALTCLKCFG_obj SYSCTL_ALTCLKCFG_t;

// Initializer
SYSCTL_ALTCLKCFG_t init_SYSCTL_ALTCLKCFG(void);


#endif // _ALTCLKCFG_h_

