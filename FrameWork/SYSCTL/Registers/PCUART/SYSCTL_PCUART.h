/**********************************
* \file : PCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCUART_h_
#define _PCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_PCUART_BASE_ADDR	0x400FE918

// Structure Declaration
struct SYSCTL_PCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCUART_e, int32_t);

};

typedef struct SYSCTL_PCUART_obj SYSCTL_PCUART_t;

// Initializer
SYSCTL_PCUART_t init_SYSCTL_PCUART(void);


#endif // _PCUART_h_

