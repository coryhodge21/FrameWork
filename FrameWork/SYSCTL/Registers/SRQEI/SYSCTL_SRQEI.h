/**********************************
* \file : SRQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRQEI_h_
#define _SRQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_SRQEI_BASE_ADDR	0x400FE544

// Structure Declaration
struct SYSCTL_SRQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRQEI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRQEI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRQEI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRQEI_e, int32_t);

};

typedef struct SYSCTL_SRQEI_obj SYSCTL_SRQEI_t;

// Initializer
SYSCTL_SRQEI_t init_SYSCTL_SRQEI(void);


#endif // _SRQEI_h_

