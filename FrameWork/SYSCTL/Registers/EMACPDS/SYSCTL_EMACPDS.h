/**********************************
* \file : EMACPDS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _EMACPDS_h_
#define _EMACPDS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_EMACPDS_enums.h" 

// Base Address for this Register
#define SYSCTL_EMACPDS_BASE_ADDR	0x400FE288

// Structure Declaration
struct SYSCTL_EMACPDS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_EMACPDS_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_EMACPDS_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_EMACPDS_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_EMACPDS_e, int32_t);

};

typedef struct SYSCTL_EMACPDS_obj SYSCTL_EMACPDS_t;

// Initializer
SYSCTL_EMACPDS_t init_SYSCTL_EMACPDS(void);


#endif // _EMACPDS_h_

