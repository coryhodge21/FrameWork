/**********************************
* \file : DCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCTIMER_h_
#define _DCGCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCTIMER_BASE_ADDR	0x400FE804

// Structure Declaration
struct SYSCTL_DCGCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCTIMER_e, int32_t);

};

typedef struct SYSCTL_DCGCTIMER_obj SYSCTL_DCGCTIMER_t;

// Initializer
SYSCTL_DCGCTIMER_t init_SYSCTL_DCGCTIMER(void);


#endif // _DCGCTIMER_h_

