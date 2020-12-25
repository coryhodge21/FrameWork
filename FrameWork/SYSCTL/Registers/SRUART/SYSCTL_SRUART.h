/**********************************
* \file : SRUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRUART_h_
#define _SRUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRUART_enums.h" 

// Base Address for this Register
#define SYSCTL_SRUART_BASE_ADDR	0x400FE518

// Structure Declaration
struct SYSCTL_SRUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SRUART_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SRUART_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SRUART_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SRUART_e, int32_t);

};

typedef struct SYSCTL_SRUART_obj SYSCTL_SRUART_t;

// Initializer
SYSCTL_SRUART_t init_SYSCTL_SRUART(void);


#endif // _SRUART_h_

