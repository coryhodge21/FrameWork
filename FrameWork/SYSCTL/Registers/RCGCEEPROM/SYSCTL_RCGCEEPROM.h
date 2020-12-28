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

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCEEPROM_Set_fpt)(RCGCEEPROM_e);

typedef void(*RCGCEEPROM_Clear_fpt)(RCGCEEPROM_e);

typedef int(*RCGCEEPROM_Read_fpt)(RCGCEEPROM_e);

typedef void(*RCGCEEPROM_Write_fpt)(RCGCEEPROM_e, int);

// Structure Declaration
struct SYSCTL_RCGCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCEEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCEEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCEEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCEEPROM_Write_fpt	write;

};

typedef struct SYSCTL_RCGCEEPROM_obj SYSCTL_RCGCEEPROM_t;

// Initializer
SYSCTL_RCGCEEPROM_t init_SYSCTL_RCGCEEPROM(void);


#endif // _RCGCEEPROM_h_

