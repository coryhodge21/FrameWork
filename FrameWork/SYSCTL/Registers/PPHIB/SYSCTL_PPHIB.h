/**********************************
* \file : PPHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPHIB_h_
#define _PPHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_PPHIB_BASE_ADDR	0x400FE314

// Structure Declaration
struct SYSCTL_PPHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPHIB_e, int32_t);

};

typedef struct SYSCTL_PPHIB_obj SYSCTL_PPHIB_t;

// Initializer
SYSCTL_PPHIB_t init_SYSCTL_PPHIB(void);


#endif // _PPHIB_h_

