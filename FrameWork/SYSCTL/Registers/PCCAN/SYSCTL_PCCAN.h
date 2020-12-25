/**********************************
* \file : PCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCCAN_h_
#define _PCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PCCAN_BASE_ADDR	0x400FE934

// Structure Declaration
struct SYSCTL_PCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCCAN_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCCAN_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCCAN_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCCAN_e, int32_t);

};

typedef struct SYSCTL_PCCAN_obj SYSCTL_PCCAN_t;

// Initializer
SYSCTL_PCCAN_t init_SYSCTL_PCCAN(void);


#endif // _PCCAN_h_

