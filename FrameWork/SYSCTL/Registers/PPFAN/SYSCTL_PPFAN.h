/**********************************
* \file : PPFAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPFAN_h_
#define _PPFAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPFAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PPFAN_BASE_ADDR	0x400FE354

// Structure Declaration
struct SYSCTL_PPFAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPFAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPFAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPFAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPFAN_e, int32_t);

};

typedef struct SYSCTL_PPFAN_obj SYSCTL_PPFAN_t;

// Initializer
SYSCTL_PPFAN_t init_SYSCTL_PPFAN(void);


#endif // _PPFAN_h_
