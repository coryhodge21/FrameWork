/**********************************
* \file : PRUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRUART_h_
#define _PRUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRUART_enums.h" 

// Base Address for this Register
#define SYSCTL_PRUART_BASE_ADDR	0x400FEA18

// Structure Declaration
struct SYSCTL_PRUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PRUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PRUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PRUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PRUART_e, int32_t);

};

typedef struct SYSCTL_PRUART_obj SYSCTL_PRUART_t;

// Initializer
SYSCTL_PRUART_t init_SYSCTL_PRUART(void);


#endif // _PRUART_h_

