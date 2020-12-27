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

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCEEPROM_Set_fpt)(SCGCEEPROM_e);

typedef void(*SCGCEEPROM_Clear_fpt)(SCGCEEPROM_e);

typedef int(*SCGCEEPROM_Read_fpt)(SCGCEEPROM_e);

typedef void(*SCGCEEPROM_Write_fpt)(SCGCEEPROM_e, int);

// Structure Declaration
struct SYSCTL_SCGCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCEEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCEEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCEEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCEEPROM_Write_fpt	write;

};

typedef struct SYSCTL_SCGCEEPROM_obj SYSCTL_SCGCEEPROM_t;

// Initializer
SYSCTL_SCGCEEPROM_t init_SYSCTL_SCGCEEPROM(void);


#endif // _SCGCEEPROM_h_

