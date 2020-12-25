/**********************************
* \file : PRTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRTIMER_h_
#define _PRTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PRTIMER_BASE_ADDR	0x400FEA04

// Structure Declaration
struct SYSCTL_PRTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRTIMER_e, int32_t);

};

typedef struct SYSCTL_PRTIMER_obj SYSCTL_PRTIMER_t;

// Initializer
SYSCTL_PRTIMER_t init_SYSCTL_PRTIMER(void);


#endif // _PRTIMER_h_

