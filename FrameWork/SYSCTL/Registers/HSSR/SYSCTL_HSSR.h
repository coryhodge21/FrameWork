/**********************************
* \file : HSSR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _HSSR_h_
#define _HSSR_h_

//! \brief Enumerations for this Register
#include "SYSCTL_HSSR_enums.h" 

// Base Address for this Register
#define SYSCTL_HSSR_BASE_ADDR	0x400FE1F4

// Structure Declaration
struct SYSCTL_HSSR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_HSSR_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_HSSR_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_HSSR_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_HSSR_e, int32_t);

};

typedef struct SYSCTL_HSSR_obj SYSCTL_HSSR_t;

// Initializer
SYSCTL_HSSR_t init_SYSCTL_HSSR(void);


#endif // _HSSR_h_

