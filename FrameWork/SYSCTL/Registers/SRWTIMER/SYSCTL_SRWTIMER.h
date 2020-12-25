/**********************************
* \file : SRWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRWTIMER_h_
#define _SRWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SRWTIMER_BASE_ADDR	0x400FE55C

// Structure Declaration
struct SYSCTL_SRWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRWTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRWTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRWTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRWTIMER_e, int32_t);

};

typedef struct SYSCTL_SRWTIMER_obj SYSCTL_SRWTIMER_t;

// Initializer
SYSCTL_SRWTIMER_t init_SYSCTL_SRWTIMER(void);


#endif // _SRWTIMER_h_

