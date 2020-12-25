/**********************************
* \file : UNIQUEID3.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID3_h_
#define _UNIQUEID3_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID3_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID3_BASE_ADDR	0x400FEF2C

// Structure Declaration
struct SYSCTL_UNIQUEID3_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_UNIQUEID3_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_UNIQUEID3_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_UNIQUEID3_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_UNIQUEID3_e, int32_t);

};

typedef struct SYSCTL_UNIQUEID3_obj SYSCTL_UNIQUEID3_t;

// Initializer
SYSCTL_UNIQUEID3_t init_SYSCTL_UNIQUEID3(void);


#endif // _UNIQUEID3_h_

