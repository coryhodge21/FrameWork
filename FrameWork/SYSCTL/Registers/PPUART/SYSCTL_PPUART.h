/**********************************
* \file : PPUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPUART_h_
#define _PPUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPUART_enums.h" 

// Base Address for this Register
#define SYSCTL_PPUART_BASE_ADDR	0x400FE318

// Structure Declaration
struct SYSCTL_PPUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPUART_e, int32_t);

};

typedef struct SYSCTL_PPUART_obj SYSCTL_PPUART_t;

// Initializer
SYSCTL_PPUART_t init_SYSCTL_PPUART(void);


#endif // _PPUART_h_

