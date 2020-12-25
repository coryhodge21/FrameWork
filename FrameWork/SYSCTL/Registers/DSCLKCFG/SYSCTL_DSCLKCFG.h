/**********************************
* \file : DSCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSCLKCFG_h_
#define _DSCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DSCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_DSCLKCFG_BASE_ADDR	0x400FE144

// Structure Declaration
struct SYSCTL_DSCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DSCLKCFG_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DSCLKCFG_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DSCLKCFG_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DSCLKCFG_e, int32_t);

};

typedef struct SYSCTL_DSCLKCFG_obj SYSCTL_DSCLKCFG_t;

// Initializer
SYSCTL_DSCLKCFG_t init_SYSCTL_DSCLKCFG(void);


#endif // _DSCLKCFG_h_

