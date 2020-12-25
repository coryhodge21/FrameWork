/**********************************
* \file : PPPECI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPPECI_h_
#define _PPPECI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPPECI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPPECI_BASE_ADDR	0x400FE350

// Structure Declaration
struct SYSCTL_PPPECI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPPECI_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPPECI_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPPECI_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPPECI_e, int32_t);

};

typedef struct SYSCTL_PPPECI_obj SYSCTL_PPPECI_t;

// Initializer
SYSCTL_PPPECI_t init_SYSCTL_PPPECI(void);


#endif // _PPPECI_h_

