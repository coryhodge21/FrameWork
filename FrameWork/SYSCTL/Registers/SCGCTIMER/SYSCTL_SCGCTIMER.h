/**********************************
* \file : SCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCTIMER_h_
#define _SCGCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCTIMER_BASE_ADDR	0x400FE704

// Structure Declaration
struct SYSCTL_SCGCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCTIMER_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCTIMER_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCTIMER_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCTIMER_e, int32_t);

};

typedef struct SYSCTL_SCGCTIMER_obj SYSCTL_SCGCTIMER_t;

// Initializer
SYSCTL_SCGCTIMER_t init_SYSCTL_SCGCTIMER(void);


#endif // _SCGCTIMER_h_

