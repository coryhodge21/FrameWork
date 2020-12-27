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

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PREEPROM_Set_fpt)(PREEPROM_e);

typedef void(*PREEPROM_Clear_fpt)(PREEPROM_e);

typedef int(*PREEPROM_Read_fpt)(PREEPROM_e);

typedef void(*PREEPROM_Write_fpt)(PREEPROM_e, int);

// Structure Declaration
struct SYSCTL_PREEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PREEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PREEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PREEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PREEPROM_Write_fpt	write;

};

typedef struct SYSCTL_PREEPROM_obj SYSCTL_PREEPROM_t;

// Initializer
SYSCTL_PREEPROM_t init_SYSCTL_PREEPROM(void);


#endif // _PREEPROM_h_

