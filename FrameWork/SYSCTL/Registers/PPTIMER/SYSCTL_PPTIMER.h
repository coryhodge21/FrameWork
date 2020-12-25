/**********************************
* \file : PPTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPTIMER_h_
#define _PPTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PPTIMER_BASE_ADDR	0x400FE304

// Structure Declaration
struct SYSCTL_PPTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPTIMER_e, int32_t);

};

typedef struct SYSCTL_PPTIMER_obj SYSCTL_PPTIMER_t;

// Initializer
SYSCTL_PPTIMER_t init_SYSCTL_PPTIMER(void);


#endif // _PPTIMER_h_

