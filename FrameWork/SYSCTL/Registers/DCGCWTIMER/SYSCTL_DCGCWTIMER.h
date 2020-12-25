/**********************************
* \file : DCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCWTIMER_h_
#define _DCGCWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCWTIMER_BASE_ADDR	0x400FE85C

// Structure Declaration
struct SYSCTL_DCGCWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCWTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCWTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCWTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCWTIMER_e, int32_t);

};

typedef struct SYSCTL_DCGCWTIMER_obj SYSCTL_DCGCWTIMER_t;

// Initializer
SYSCTL_DCGCWTIMER_t init_SYSCTL_DCGCWTIMER(void);


#endif // _DCGCWTIMER_h_

