/**********************************
* \file : PCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEEPROM_h_
#define _PCEEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCEEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_PCEEPROM_BASE_ADDR	0x400FE958

// Structure Declaration
struct SYSCTL_PCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PCEEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PCEEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PCEEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PCEEPROM_e, int32_t);

};

typedef struct SYSCTL_PCEEPROM_obj SYSCTL_PCEEPROM_t;

// Initializer
SYSCTL_PCEEPROM_t init_SYSCTL_PCEEPROM(void);


#endif // _PCEEPROM_h_

