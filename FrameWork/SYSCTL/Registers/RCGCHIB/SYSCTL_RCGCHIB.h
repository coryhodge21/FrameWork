/**********************************
* \file : RCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCHIB_h_
#define _RCGCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCHIB_BASE_ADDR	0x400FE614

// Structure Declaration
struct SYSCTL_RCGCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCHIB_e, int32_t);

};

typedef struct SYSCTL_RCGCHIB_obj SYSCTL_RCGCHIB_t;

// Initializer
SYSCTL_RCGCHIB_t init_SYSCTL_RCGCHIB(void);


#endif // _RCGCHIB_h_

