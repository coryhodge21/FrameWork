/**********************************
* \file : PRWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRWTIMER_h_
#define _PRWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PRWTIMER_BASE_ADDR	0x400FEA5C

// Structure Declaration
struct SYSCTL_PRWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRWTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRWTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRWTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRWTIMER_e, int32_t);

};

typedef struct SYSCTL_PRWTIMER_obj SYSCTL_PRWTIMER_t;

// Initializer
SYSCTL_PRWTIMER_t init_SYSCTL_PRWTIMER(void);


#endif // _PRWTIMER_h_

