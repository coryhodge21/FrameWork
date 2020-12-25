/**********************************
* \file : RCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEEPROM_h_
#define _RCGCEEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCEEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCEEPROM_BASE_ADDR	0x400FE658

// Structure Declaration
struct SYSCTL_RCGCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_RCGCEEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_RCGCEEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_RCGCEEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_RCGCEEPROM_e, int32_t);

};

typedef struct SYSCTL_RCGCEEPROM_obj SYSCTL_RCGCEEPROM_t;

// Initializer
SYSCTL_RCGCEEPROM_t init_SYSCTL_RCGCEEPROM(void);


#endif // _RCGCEEPROM_h_

