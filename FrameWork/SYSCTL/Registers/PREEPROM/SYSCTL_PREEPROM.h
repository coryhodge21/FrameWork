/**********************************
* \file : PREEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREEPROM_h_
#define _PREEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_PREEPROM_BASE_ADDR	0x400FEA58

// Structure Declaration
struct SYSCTL_PREEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	void(*set)(SYSCTL_PREEPROM_e);

	// Clear the Bits of this Register Masked by the enumeration
	void(*clear)(SYSCTL_PREEPROM_e);

	// Read the Bits of this Register Masked by the enumeration
	int32_t(*read)(SYSCTL_PREEPROM_e);

	// Write the Bits of this Register Masked by the enumeration
	void(*write)(SYSCTL_PREEPROM_e, int32_t);

};

typedef struct SYSCTL_PREEPROM_obj SYSCTL_PREEPROM_t;

// Initializer
SYSCTL_PREEPROM_t init_SYSCTL_PREEPROM(void);


#endif // _PREEPROM_h_

