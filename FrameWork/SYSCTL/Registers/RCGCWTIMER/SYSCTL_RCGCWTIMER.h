/**********************************
* \file : RCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCWTIMER_h_
#define _RCGCWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCWTIMER_BASE_ADDR	0x400FE65C

// Structure Declaration
struct SYSCTL_RCGCWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCWTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCWTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCWTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCWTIMER_e, int32_t);

};

typedef struct SYSCTL_RCGCWTIMER_obj SYSCTL_RCGCWTIMER_t;

// Initializer
SYSCTL_RCGCWTIMER_t init_SYSCTL_RCGCWTIMER(void);


#endif // _RCGCWTIMER_h_

