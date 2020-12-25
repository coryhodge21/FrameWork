/**********************************
* \file : DCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEEPROM_h_
#define _DCGCEEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEEPROM_BASE_ADDR	0x400FE858

// Structure Declaration
struct SYSCTL_DCGCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_DCGCEEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_DCGCEEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_DCGCEEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_DCGCEEPROM_e, int32_t);

};

typedef struct SYSCTL_DCGCEEPROM_obj SYSCTL_DCGCEEPROM_t;

// Initializer
SYSCTL_DCGCEEPROM_t init_SYSCTL_DCGCEEPROM(void);


#endif // _DCGCEEPROM_h_

