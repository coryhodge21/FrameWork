/**********************************
* \file : RCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCTIMER_h_
#define _RCGCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCTIMER_BASE_ADDR	0x400FE604

// Structure Declaration
struct SYSCTL_RCGCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCTIMER_e, int32_t);

};

typedef struct SYSCTL_RCGCTIMER_obj SYSCTL_RCGCTIMER_t;

// Initializer
SYSCTL_RCGCTIMER_t init_SYSCTL_RCGCTIMER(void);


#endif // _RCGCTIMER_h_

