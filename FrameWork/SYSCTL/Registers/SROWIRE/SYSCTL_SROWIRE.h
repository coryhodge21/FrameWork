/**********************************
* \file : SROWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SROWIRE_h_
#define _SROWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SROWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_SROWIRE_BASE_ADDR	0x400FE598

// Structure Declaration
struct SYSCTL_SROWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SROWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SROWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SROWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SROWIRE_e, int32_t);

};

typedef struct SYSCTL_SROWIRE_obj SYSCTL_SROWIRE_t;

// Initializer
SYSCTL_SROWIRE_t init_SYSCTL_SROWIRE(void);


#endif // _SROWIRE_h_

