/**********************************
* \file : DIVSCLK.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DIVSCLK_h_
#define _DIVSCLK_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DIVSCLK_enums.h" 

// Base Address for this Register
#define SYSCTL_DIVSCLK_BASE_ADDR	0x400FE148

// Structure Declaration
struct SYSCTL_DIVSCLK_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DIVSCLK_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DIVSCLK_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DIVSCLK_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DIVSCLK_e, int32_t);

};

typedef struct SYSCTL_DIVSCLK_obj SYSCTL_DIVSCLK_t;

// Initializer
SYSCTL_DIVSCLK_t init_SYSCTL_DIVSCLK(void);


#endif // _DIVSCLK_h_

