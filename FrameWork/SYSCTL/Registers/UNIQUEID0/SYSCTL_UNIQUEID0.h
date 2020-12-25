/**********************************
* \file : UNIQUEID0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID0_h_
#define _UNIQUEID0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID0_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID0_BASE_ADDR	0x400FEF20

// Structure Declaration
struct SYSCTL_UNIQUEID0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_UNIQUEID0_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_UNIQUEID0_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_UNIQUEID0_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_UNIQUEID0_e, int32_t);

};

typedef struct SYSCTL_UNIQUEID0_obj SYSCTL_UNIQUEID0_t;

// Initializer
SYSCTL_UNIQUEID0_t init_SYSCTL_UNIQUEID0(void);


#endif // _UNIQUEID0_h_

