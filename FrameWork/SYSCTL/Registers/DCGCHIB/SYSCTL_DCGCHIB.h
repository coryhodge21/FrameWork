/**********************************
* \file : DCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCHIB_h_
#define _DCGCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCHIB_BASE_ADDR	0x400FE814

// Structure Declaration
struct SYSCTL_DCGCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCHIB_e, int32_t);

};

typedef struct SYSCTL_DCGCHIB_obj SYSCTL_DCGCHIB_t;

// Initializer
SYSCTL_DCGCHIB_t init_SYSCTL_DCGCHIB(void);


#endif // _DCGCHIB_h_

