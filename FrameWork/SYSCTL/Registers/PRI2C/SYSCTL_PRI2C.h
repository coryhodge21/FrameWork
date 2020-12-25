/**********************************
* \file : PRI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRI2C_h_
#define _PRI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_PRI2C_BASE_ADDR	0x400FEA20

// Structure Declaration
struct SYSCTL_PRI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRI2C_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRI2C_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRI2C_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRI2C_e, int32_t);

};

typedef struct SYSCTL_PRI2C_obj SYSCTL_PRI2C_t;

// Initializer
SYSCTL_PRI2C_t init_SYSCTL_PRI2C(void);


#endif // _PRI2C_h_

