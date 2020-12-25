/**********************************
* \file : PRQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRQEI_h_
#define _PRQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_PRQEI_BASE_ADDR	0x400FEA44

// Structure Declaration
struct SYSCTL_PRQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRQEI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRQEI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRQEI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRQEI_e, int32_t);

};

typedef struct SYSCTL_PRQEI_obj SYSCTL_PRQEI_t;

// Initializer
SYSCTL_PRQEI_t init_SYSCTL_PRQEI(void);


#endif // _PRQEI_h_

