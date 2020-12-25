/**********************************
* \file : RCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCQEI_h_
#define _RCGCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCQEI_BASE_ADDR	0x400FE644

// Structure Declaration
struct SYSCTL_RCGCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCQEI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCQEI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCQEI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCQEI_e, int32_t);

};

typedef struct SYSCTL_RCGCQEI_obj SYSCTL_RCGCQEI_t;

// Initializer
SYSCTL_RCGCQEI_t init_SYSCTL_RCGCQEI(void);


#endif // _RCGCQEI_h_

