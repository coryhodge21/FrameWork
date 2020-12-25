/**********************************
* \file : PROWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PROWIRE_h_
#define _PROWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PROWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_PROWIRE_BASE_ADDR	0x400FEA98

// Structure Declaration
struct SYSCTL_PROWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PROWIRE_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PROWIRE_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PROWIRE_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PROWIRE_e, int32_t);

};

typedef struct SYSCTL_PROWIRE_obj SYSCTL_PROWIRE_t;

// Initializer
SYSCTL_PROWIRE_t init_SYSCTL_PROWIRE(void);


#endif // _PROWIRE_h_

