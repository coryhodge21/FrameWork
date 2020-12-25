/**********************************
* \file : UNIQUEID1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID1_h_
#define _UNIQUEID1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID1_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID1_BASE_ADDR	0x400FEF24

// Structure Declaration
struct SYSCTL_UNIQUEID1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_UNIQUEID1_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_UNIQUEID1_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_UNIQUEID1_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_UNIQUEID1_e, int32_t);

};

typedef struct SYSCTL_UNIQUEID1_obj SYSCTL_UNIQUEID1_t;

// Initializer
SYSCTL_UNIQUEID1_t init_SYSCTL_UNIQUEID1(void);


#endif // _UNIQUEID1_h_

