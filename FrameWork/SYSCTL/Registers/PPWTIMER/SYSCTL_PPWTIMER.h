/**********************************
* \file : PPWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPWTIMER_h_
#define _PPWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PPWTIMER_BASE_ADDR	0x400FE35C

// Structure Declaration
struct SYSCTL_PPWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPWTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPWTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPWTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPWTIMER_e, int32_t);

};

typedef struct SYSCTL_PPWTIMER_obj SYSCTL_PPWTIMER_t;

// Initializer
SYSCTL_PPWTIMER_t init_SYSCTL_PPWTIMER(void);


#endif // _PPWTIMER_h_

