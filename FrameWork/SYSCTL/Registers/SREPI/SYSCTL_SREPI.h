/**********************************
* \file : SREPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREPI_h_
#define _SREPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREPI_enums.h" 

// Base Address for this Register
#define SYSCTL_SREPI_BASE_ADDR	0x400FE510

// Structure Declaration
struct SYSCTL_SREPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SREPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SREPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SREPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SREPI_e, int32_t);

};

typedef struct SYSCTL_SREPI_obj SYSCTL_SREPI_t;

// Initializer
SYSCTL_SREPI_t init_SYSCTL_SREPI(void);


#endif // _SREPI_h_

