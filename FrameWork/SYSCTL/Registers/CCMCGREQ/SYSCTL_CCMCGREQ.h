/**********************************
* \file : CCMCGREQ.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _CCMCGREQ_h_
#define _CCMCGREQ_h_

//! \brief Enumerations for this Register
#include "SYSCTL_CCMCGREQ_enums.h" 

// Base Address for this Register
#define SYSCTL_CCMCGREQ_BASE_ADDR	0x44030204

// Structure Declaration
struct SYSCTL_CCMCGREQ_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_CCMCGREQ_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_CCMCGREQ_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_CCMCGREQ_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_CCMCGREQ_e, int32_t);

};

typedef struct SYSCTL_CCMCGREQ_obj SYSCTL_CCMCGREQ_t;

// Initializer
SYSCTL_CCMCGREQ_t init_SYSCTL_CCMCGREQ(void);


#endif // _CCMCGREQ_h_

