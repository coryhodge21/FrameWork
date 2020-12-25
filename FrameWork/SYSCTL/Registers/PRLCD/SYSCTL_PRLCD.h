/**********************************
* \file : PRLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRLCD_h_
#define _PRLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_PRLCD_BASE_ADDR	0x400FEA90

// Structure Declaration
struct SYSCTL_PRLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRLCD_e, int32_t);

};

typedef struct SYSCTL_PRLCD_obj SYSCTL_PRLCD_t;

// Initializer
SYSCTL_PRLCD_t init_SYSCTL_PRLCD(void);


#endif // _PRLCD_h_

