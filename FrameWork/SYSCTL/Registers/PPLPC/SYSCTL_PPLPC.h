/**********************************
* \file : PPLPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPLPC_h_
#define _PPLPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPLPC_enums.h" 

// Base Address for this Register
#define SYSCTL_PPLPC_BASE_ADDR	0x400FE348

// Structure Declaration
struct SYSCTL_PPLPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPLPC_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPLPC_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPLPC_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPLPC_e, int32_t);

};

typedef struct SYSCTL_PPLPC_obj SYSCTL_PPLPC_t;

// Initializer
SYSCTL_PPLPC_t init_SYSCTL_PPLPC(void);


#endif // _PPLPC_h_

