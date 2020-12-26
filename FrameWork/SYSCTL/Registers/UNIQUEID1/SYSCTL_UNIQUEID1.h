/**********************************
* \file : UNIQUEID1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID1_h_
#define _UNIQUEID1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID1_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID1_BASE_ADDR	0x400FEF24

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*UNIQUEID1_Set_fpt)(UNIQUEID1_e);

typedef void(*UNIQUEID1_Clear_fpt)(UNIQUEID1_e);

typedef int(*UNIQUEID1_Read_fpt)(UNIQUEID1_e);

typedef void(*UNIQUEID1_Write_fpt)(UNIQUEID1_e, int);

// Structure Declaration
struct SYSCTL_UNIQUEID1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	UNIQUEID1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 UNIQUEID1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	UNIQUEID1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	UNIQUEID1_Write_fpt	write;

};

typedef struct SYSCTL_UNIQUEID1_obj SYSCTL_UNIQUEID1_t;

// Initializer
SYSCTL_UNIQUEID1_t init_SYSCTL_UNIQUEID1(void);


#endif // _UNIQUEID1_h_

