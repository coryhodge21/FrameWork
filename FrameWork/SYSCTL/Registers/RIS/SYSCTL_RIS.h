/**********************************
* \file : RIS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RIS_h_
#define _RIS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RIS_enums.h" 

// Base Address for this Register
#define SYSCTL_RIS_BASE_ADDR	0x400FE050

// Structure Declaration
struct SYSCTL_RIS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RIS_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RIS_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RIS_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RIS_e, int32_t);

};

typedef struct SYSCTL_RIS_obj SYSCTL_RIS_t;

// Initializer
SYSCTL_RIS_t init_SYSCTL_RIS(void);


#endif // _RIS_h_

