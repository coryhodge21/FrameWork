/**********************************
* \file : PCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEPI_h_
#define _PCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_PCEPI_BASE_ADDR	0x400FE910

// Structure Declaration
struct SYSCTL_PCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCEPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCEPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCEPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCEPI_e, int32_t);

};

typedef struct SYSCTL_PCEPI_obj SYSCTL_PCEPI_t;

// Initializer
SYSCTL_PCEPI_t init_SYSCTL_PCEPI(void);


#endif // _PCEPI_h_

