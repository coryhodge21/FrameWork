/**********************************
* \file : PREPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREPI_h_
#define _PREPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREPI_enums.h" 

// Base Address for this Register
#define SYSCTL_PREPI_BASE_ADDR	0x400FEA10

// Structure Declaration
struct SYSCTL_PREPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PREPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PREPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PREPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PREPI_e, int32_t);

};

typedef struct SYSCTL_PREPI_obj SYSCTL_PREPI_t;

// Initializer
SYSCTL_PREPI_t init_SYSCTL_PREPI(void);


#endif // _PREPI_h_

