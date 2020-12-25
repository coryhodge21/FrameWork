/**********************************
* \file : PRHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRHIB_h_
#define _PRHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_PRHIB_BASE_ADDR	0x400FEA14

// Structure Declaration
struct SYSCTL_PRHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRHIB_e, int32_t);

};

typedef struct SYSCTL_PRHIB_obj SYSCTL_PRHIB_t;

// Initializer
SYSCTL_PRHIB_t init_SYSCTL_PRHIB(void);


#endif // _PRHIB_h_

