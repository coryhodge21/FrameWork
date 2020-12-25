/**********************************
* \file : PPRTS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPRTS_h_
#define _PPRTS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPRTS_enums.h" 

// Base Address for this Register
#define SYSCTL_PPRTS_BASE_ADDR	0x400FE370

// Structure Declaration
struct SYSCTL_PPRTS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPRTS_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPRTS_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPRTS_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPRTS_e, int32_t);

};

typedef struct SYSCTL_PPRTS_obj SYSCTL_PPRTS_t;

// Initializer
SYSCTL_PPRTS_t init_SYSCTL_PPRTS(void);


#endif // _PPRTS_h_

