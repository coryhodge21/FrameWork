/**********************************
* \file : RCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCSSI_h_
#define _RCGCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCSSI_BASE_ADDR	0x400FE61C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCSSI_Set_fpt)(RCGCSSI_e);

typedef void(*RCGCSSI_Clear_fpt)(RCGCSSI_e);

typedef int(*RCGCSSI_Read_fpt)(RCGCSSI_e);

typedef void(*RCGCSSI_Write_fpt)(RCGCSSI_e, int);

// Structure Declaration
struct SYSCTL_RCGCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCSSI_Write_fpt	write;

};

typedef struct SYSCTL_RCGCSSI_obj SYSCTL_RCGCSSI_t;

// Initializer
SYSCTL_RCGCSSI_t init_SYSCTL_RCGCSSI(void);


#endif // _RCGCSSI_h_

