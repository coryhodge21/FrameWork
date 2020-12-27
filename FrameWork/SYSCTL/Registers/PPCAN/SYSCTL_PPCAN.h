/**********************************
* \file : PPCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPCAN_h_
#define _PPCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PPCAN_BASE_ADDR	0x400FE334

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPCAN_Set_fpt)(PPCAN_e);

typedef void(*PPCAN_Clear_fpt)(PPCAN_e);

typedef int(*PPCAN_Read_fpt)(PPCAN_e);

typedef void(*PPCAN_Write_fpt)(PPCAN_e, int);

// Structure Declaration
struct SYSCTL_PPCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPCAN_Write_fpt	write;

};

typedef struct SYSCTL_PPCAN_obj SYSCTL_PPCAN_t;

// Initializer
SYSCTL_PPCAN_t init_SYSCTL_PPCAN(void);


#endif // _PPCAN_h_

