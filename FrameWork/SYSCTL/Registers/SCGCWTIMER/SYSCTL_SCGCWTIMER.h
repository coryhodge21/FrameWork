/**********************************
* \file : SCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCWTIMER_h_
#define _SCGCWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCWTIMER_BASE_ADDR	0x400FE75C

// Structure Declaration
struct SYSCTL_SCGCWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCWTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCWTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCWTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCWTIMER_e, int32_t);

};

typedef struct SYSCTL_SCGCWTIMER_obj SYSCTL_SCGCWTIMER_t;

// Initializer
SYSCTL_SCGCWTIMER_t init_SYSCTL_SCGCWTIMER(void);


#endif // _SCGCWTIMER_h_

