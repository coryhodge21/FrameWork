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

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPEEPROM_Set_fpt)(PPEEPROM_e);

typedef void(*PPEEPROM_Clear_fpt)(PPEEPROM_e);

typedef int(*PPEEPROM_Read_fpt)(PPEEPROM_e);

typedef void(*PPEEPROM_Write_fpt)(PPEEPROM_e, int);

// Structure Declaration
struct SYSCTL_PPEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPEEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPEEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPEEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPEEPROM_Write_fpt	write;

};

typedef struct SYSCTL_PPEEPROM_obj SYSCTL_PPEEPROM_t;

// Initializer
SYSCTL_PPEEPROM_t init_SYSCTL_PPEEPROM(void);


#endif // _PPEEPROM_h_

