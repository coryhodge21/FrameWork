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

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCEEPROM_Set_fpt)(PCEEPROM_e);

typedef void(*PCEEPROM_Clear_fpt)(PCEEPROM_e);

typedef int(*PCEEPROM_Read_fpt)(PCEEPROM_e);

typedef void(*PCEEPROM_Write_fpt)(PCEEPROM_e, int);

// Structure Declaration
struct SYSCTL_PCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCEEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCEEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCEEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCEEPROM_Write_fpt	write;

};

typedef struct SYSCTL_PCEEPROM_obj SYSCTL_PCEEPROM_t;

// Initializer
SYSCTL_PCEEPROM_t init_SYSCTL_PCEEPROM(void);


#endif // _PCEEPROM_h_

