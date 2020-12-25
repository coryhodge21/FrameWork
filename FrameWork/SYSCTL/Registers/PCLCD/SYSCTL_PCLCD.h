/**********************************
* \file : PCLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCLCD_h_
#define _PCLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_PCLCD_BASE_ADDR	0x400FE990

// Structure Declaration
struct SYSCTL_PCLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCLCD_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCLCD_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCLCD_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCLCD_e, int32_t);

};

typedef struct SYSCTL_PCLCD_obj SYSCTL_PCLCD_t;

// Initializer
SYSCTL_PCLCD_t init_SYSCTL_PCLCD(void);


#endif // _PCLCD_h_

