/**********************************
* \file : UNIQUEID2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID2_h_
#define _UNIQUEID2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID2_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID2_BASE_ADDR	0x400FEF28

// Structure Declaration
struct SYSCTL_UNIQUEID2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_UNIQUEID2_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_UNIQUEID2_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_UNIQUEID2_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_UNIQUEID2_e, int32_t);

};

typedef struct SYSCTL_UNIQUEID2_obj SYSCTL_UNIQUEID2_t;

// Initializer
SYSCTL_UNIQUEID2_t init_SYSCTL_UNIQUEID2(void);


#endif // _UNIQUEID2_h_

