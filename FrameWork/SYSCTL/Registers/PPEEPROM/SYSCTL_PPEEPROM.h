/**********************************
* \file : PPEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEEPROM_h_
#define _PPEEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEEPROM_BASE_ADDR	0x400FE358

// Structure Declaration
struct SYSCTL_PPEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PPEEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PPEEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PPEEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PPEEPROM_e, int32_t);

};

typedef struct SYSCTL_PPEEPROM_obj SYSCTL_PPEEPROM_t;

// Initializer
SYSCTL_PPEEPROM_t init_SYSCTL_PPEEPROM(void);


#endif // _PPEEPROM_h_

