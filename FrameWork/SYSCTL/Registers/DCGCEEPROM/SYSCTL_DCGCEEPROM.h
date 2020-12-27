/**********************************
* \file : DCGCEEPROM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEEPROM_h_
#define _DCGCEEPROM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEEPROM_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEEPROM_BASE_ADDR	0x400FE858

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCEEPROM_Set_fpt)(DCGCEEPROM_e);

typedef void(*DCGCEEPROM_Clear_fpt)(DCGCEEPROM_e);

typedef int(*DCGCEEPROM_Read_fpt)(DCGCEEPROM_e);

typedef void(*DCGCEEPROM_Write_fpt)(DCGCEEPROM_e, int);

// Structure Declaration
struct SYSCTL_DCGCEEPROM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCEEPROM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCEEPROM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCEEPROM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCEEPROM_Write_fpt	write;

};

typedef struct SYSCTL_DCGCEEPROM_obj SYSCTL_DCGCEEPROM_t;

// Initializer
SYSCTL_DCGCEEPROM_t init_SYSCTL_DCGCEEPROM(void);


#endif // _DCGCEEPROM_h_

