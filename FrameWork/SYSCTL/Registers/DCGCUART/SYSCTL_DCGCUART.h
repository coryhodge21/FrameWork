/**********************************
* \file : DCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCUART_h_
#define _DCGCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCUART_BASE_ADDR	0x400FE818

// Structure Declaration
struct SYSCTL_DCGCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCUART_e, int32_t);

};

typedef struct SYSCTL_DCGCUART_obj SYSCTL_DCGCUART_t;

// Initializer
SYSCTL_DCGCUART_t init_SYSCTL_DCGCUART(void);


#endif // _DCGCUART_h_

