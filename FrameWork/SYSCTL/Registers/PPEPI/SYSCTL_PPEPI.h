/**********************************
* \file : PPEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEPI_h_
#define _PPEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEPI_BASE_ADDR	0x400FE310

// Structure Declaration
struct SYSCTL_PPEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPEPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPEPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPEPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPEPI_e, int32_t);

};

typedef struct SYSCTL_PPEPI_obj SYSCTL_PPEPI_t;

// Initializer
SYSCTL_PPEPI_t init_SYSCTL_PPEPI(void);


#endif // _PPEPI_h_

