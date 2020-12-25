/**********************************
* \file : DCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEPI_h_
#define _DCGCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEPI_BASE_ADDR	0x400FE810

// Structure Declaration
struct SYSCTL_DCGCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCEPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCEPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCEPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCEPI_e, int32_t);

};

typedef struct SYSCTL_DCGCEPI_obj SYSCTL_DCGCEPI_t;

// Initializer
SYSCTL_DCGCEPI_t init_SYSCTL_DCGCEPI(void);


#endif // _DCGCEPI_h_

