/**********************************
* \file : PIOSCCAL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PIOSCCAL_h_
#define _PIOSCCAL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PIOSCCAL_enums.h" 

// Base Address for this Register
#define SYSCTL_PIOSCCAL_BASE_ADDR	0x400FE150

// Structure Declaration
struct SYSCTL_PIOSCCAL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PIOSCCAL_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PIOSCCAL_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PIOSCCAL_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PIOSCCAL_e, int32_t);

};

typedef struct SYSCTL_PIOSCCAL_obj SYSCTL_PIOSCCAL_t;

// Initializer
SYSCTL_PIOSCCAL_t init_SYSCTL_PIOSCCAL(void);


#endif // _PIOSCCAL_h_

