/**********************************
* \file : LCDMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LCDMPC_h_
#define _LCDMPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_LCDMPC_enums.h" 

// Base Address for this Register
#define SYSCTL_LCDMPC_BASE_ADDR	0x400FE294

// Structure Declaration
struct SYSCTL_LCDMPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_LCDMPC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_LCDMPC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_LCDMPC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_LCDMPC_e, int32_t);

};

typedef struct SYSCTL_LCDMPC_obj SYSCTL_LCDMPC_t;

// Initializer
SYSCTL_LCDMPC_t init_SYSCTL_LCDMPC(void);


#endif // _LCDMPC_h_

