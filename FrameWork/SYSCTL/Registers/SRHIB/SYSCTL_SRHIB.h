/**********************************
* \file : SRHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRHIB_h_
#define _SRHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_SRHIB_BASE_ADDR	0x400FE514

// Structure Declaration
struct SYSCTL_SRHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRHIB_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRHIB_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRHIB_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRHIB_e, int32_t);

};

typedef struct SYSCTL_SRHIB_obj SYSCTL_SRHIB_t;

// Initializer
SYSCTL_SRHIB_t init_SYSCTL_SRHIB(void);


#endif // _SRHIB_h_

