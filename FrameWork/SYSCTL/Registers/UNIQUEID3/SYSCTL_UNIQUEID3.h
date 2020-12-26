/**********************************
* \file : UNIQUEID3.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID3_h_
#define _UNIQUEID3_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID3_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID3_BASE_ADDR	0x400FEF2C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*UNIQUEID3_Set_fpt)(UNIQUEID3_e);

typedef void(*UNIQUEID3_Clear_fpt)(UNIQUEID3_e);

typedef int(*UNIQUEID3_Read_fpt)(UNIQUEID3_e);

typedef void(*UNIQUEID3_Write_fpt)(UNIQUEID3_e, int);

// Structure Declaration
struct SYSCTL_UNIQUEID3_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	UNIQUEID3_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 UNIQUEID3_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	UNIQUEID3_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	UNIQUEID3_Write_fpt	write;

};

typedef struct SYSCTL_UNIQUEID3_obj SYSCTL_UNIQUEID3_t;

// Initializer
SYSCTL_UNIQUEID3_t init_SYSCTL_UNIQUEID3(void);


#endif // _UNIQUEID3_h_

