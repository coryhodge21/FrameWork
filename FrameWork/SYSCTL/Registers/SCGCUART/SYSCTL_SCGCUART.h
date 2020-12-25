/**********************************
* \file : SCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCUART_h_
#define _SCGCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCUART_BASE_ADDR	0x400FE718

// Structure Declaration
struct SYSCTL_SCGCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCUART_e, int32_t);

};

typedef struct SYSCTL_SCGCUART_obj SYSCTL_SCGCUART_t;

// Initializer
SYSCTL_SCGCUART_t init_SYSCTL_SCGCUART(void);


#endif // _SCGCUART_h_

