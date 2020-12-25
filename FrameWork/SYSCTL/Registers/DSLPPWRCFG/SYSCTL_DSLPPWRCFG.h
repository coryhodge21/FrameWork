/**********************************
* \file : DSLPPWRCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSLPPWRCFG_h_
#define _DSLPPWRCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DSLPPWRCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_DSLPPWRCFG_BASE_ADDR	0x400FE18C

// Structure Declaration
struct SYSCTL_DSLPPWRCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DSLPPWRCFG_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DSLPPWRCFG_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DSLPPWRCFG_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DSLPPWRCFG_e, int32_t);

};

typedef struct SYSCTL_DSLPPWRCFG_obj SYSCTL_DSLPPWRCFG_t;

// Initializer
SYSCTL_DSLPPWRCFG_t init_SYSCTL_DSLPPWRCFG(void);


#endif // _DSLPPWRCFG_h_

