/**********************************
* \file : EMACMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _EMACMPC_h_
#define _EMACMPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_EMACMPC_enums.h" 

// Base Address for this Register
#define SYSCTL_EMACMPC_BASE_ADDR	0x400FE28C

// Structure Declaration
struct SYSCTL_EMACMPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_EMACMPC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_EMACMPC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_EMACMPC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_EMACMPC_e, int32_t);

};

typedef struct SYSCTL_EMACMPC_obj SYSCTL_EMACMPC_t;

// Initializer
SYSCTL_EMACMPC_t init_SYSCTL_EMACMPC(void);


#endif // _EMACMPC_h_

