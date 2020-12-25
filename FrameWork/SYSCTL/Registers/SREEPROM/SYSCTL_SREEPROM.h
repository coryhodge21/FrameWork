/**********************************
* \file : SREEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREEPROM_h_
#define _SREEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_SREEPROM_BASE_ADDR	0x400FE558

// Structure Declaration
struct SYSCTL_SREEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_SREEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_SREEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_SREEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_SREEPROM_e, int32_t);

};

typedef struct SYSCTL_SREEPROM_obj SYSCTL_SREEPROM_t;

// Initializer
SYSCTL_SREEPROM_t init_SYSCTL_SREEPROM(void);


#endif // _SREEPROM_h_

