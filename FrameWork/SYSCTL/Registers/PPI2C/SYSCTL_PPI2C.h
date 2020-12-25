/**********************************
* \file : PPI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPI2C_h_
#define _PPI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_PPI2C_BASE_ADDR	0x400FE320

// Structure Declaration
struct SYSCTL_PPI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPI2C_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPI2C_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPI2C_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPI2C_e, int32_t);

};

typedef struct SYSCTL_PPI2C_obj SYSCTL_PPI2C_t;

// Initializer
SYSCTL_PPI2C_t init_SYSCTL_PPI2C(void);


#endif // _PPI2C_h_

