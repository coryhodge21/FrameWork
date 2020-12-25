/**********************************
* \file : SRTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRTIMER_h_
#define _SRTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SRTIMER_BASE_ADDR	0x400FE504

// Structure Declaration
struct SYSCTL_SRTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRTIMER_e, int32_t);

};

typedef struct SYSCTL_SRTIMER_obj SYSCTL_SRTIMER_t;

// Initializer
SYSCTL_SRTIMER_t init_SYSCTL_SRTIMER(void);


#endif // _SRTIMER_h_

