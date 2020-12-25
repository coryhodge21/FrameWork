/**********************************
* \file : SCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEPI_h_
#define _SCGCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEPI_BASE_ADDR	0x400FE710

// Structure Declaration
struct SYSCTL_SCGCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCEPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCEPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCEPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCEPI_e, int32_t);

};

typedef struct SYSCTL_SCGCEPI_obj SYSCTL_SCGCEPI_t;

// Initializer
SYSCTL_SCGCEPI_t init_SYSCTL_SCGCEPI(void);


#endif // _SCGCEPI_h_

