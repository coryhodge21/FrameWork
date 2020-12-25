/**********************************
* \file : SCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCQEI_h_
#define _SCGCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCQEI_BASE_ADDR	0x400FE744

// Structure Declaration
struct SYSCTL_SCGCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCQEI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCQEI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCQEI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCQEI_e, int32_t);

};

typedef struct SYSCTL_SCGCQEI_obj SYSCTL_SCGCQEI_t;

// Initializer
SYSCTL_SCGCQEI_t init_SYSCTL_SCGCQEI(void);


#endif // _SCGCQEI_h_

