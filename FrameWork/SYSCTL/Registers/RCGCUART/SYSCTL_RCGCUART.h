/**********************************
* \file : RCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCUART_h_
#define _RCGCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCUART_BASE_ADDR	0x400FE618

// Structure Declaration
struct SYSCTL_RCGCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCUART_e, int32_t);

};

typedef struct SYSCTL_RCGCUART_obj SYSCTL_RCGCUART_t;

// Initializer
SYSCTL_RCGCUART_t init_SYSCTL_RCGCUART(void);


#endif // _RCGCUART_h_

