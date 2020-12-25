/**********************************
* \file : SCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEEPROM_h_
#define _SCGCEEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEEPROM_BASE_ADDR	0x400FE758

// Structure Declaration
struct SYSCTL_SCGCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SCGCEEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SCGCEEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SCGCEEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SCGCEEPROM_e, int32_t);

};

typedef struct SYSCTL_SCGCEEPROM_obj SYSCTL_SCGCEEPROM_t;

// Initializer
SYSCTL_SCGCEEPROM_t init_SYSCTL_SCGCEEPROM(void);


#endif // _SCGCEEPROM_h_

