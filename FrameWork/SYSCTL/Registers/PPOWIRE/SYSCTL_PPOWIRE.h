/**********************************
* \file : PPOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPOWIRE_h_
#define _PPOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_PPOWIRE_BASE_ADDR	0x400FE398

// Structure Declaration
struct SYSCTL_PPOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPOWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPOWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPOWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPOWIRE_e, int32_t);

};

typedef struct SYSCTL_PPOWIRE_obj SYSCTL_PPOWIRE_t;

// Initializer
SYSCTL_PPOWIRE_t init_SYSCTL_PPOWIRE(void);


#endif // _PPOWIRE_h_

