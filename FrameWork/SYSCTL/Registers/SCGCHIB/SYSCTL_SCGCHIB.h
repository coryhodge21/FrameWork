/**********************************
* \file : SCGCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCHIB_h_
#define _SCGCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCHIB_BASE_ADDR	0x400FE714

// Structure Declaration
struct SYSCTL_SCGCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCHIB_e, int32_t);

};

typedef struct SYSCTL_SCGCHIB_obj SYSCTL_SCGCHIB_t;

// Initializer
SYSCTL_SCGCHIB_t init_SYSCTL_SCGCHIB(void);


#endif // _SCGCHIB_h_

