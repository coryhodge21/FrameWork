/**********************************
* \file : RCGCEPI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEPI_h_
#define _RCGCEPI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCEPI_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCEPI_BASE_ADDR	0x400FE610

// Structure Declaration
struct SYSCTL_RCGCEPI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCEPI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCEPI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCEPI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCEPI_e, int32_t);

};

typedef struct SYSCTL_RCGCEPI_obj SYSCTL_RCGCEPI_t;

// Initializer
SYSCTL_RCGCEPI_t init_SYSCTL_RCGCEPI(void);


#endif // _RCGCEPI_h_

