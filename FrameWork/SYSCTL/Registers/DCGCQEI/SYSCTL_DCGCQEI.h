/**********************************
* \file : DCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCQEI_h_
#define _DCGCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCQEI_BASE_ADDR	0x400FE844

// Structure Declaration
struct SYSCTL_DCGCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCQEI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCQEI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCQEI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCQEI_e, int32_t);

};

typedef struct SYSCTL_DCGCQEI_obj SYSCTL_DCGCQEI_t;

// Initializer
SYSCTL_DCGCQEI_t init_SYSCTL_DCGCQEI(void);


#endif // _DCGCQEI_h_

