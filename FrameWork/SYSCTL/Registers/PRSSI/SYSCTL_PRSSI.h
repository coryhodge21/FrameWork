/**********************************
* \file : PRSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRSSI_h_
#define _PRSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_PRSSI_BASE_ADDR	0x400FEA1C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRSSI_Set_fpt)(PRSSI_e);

typedef void(*PRSSI_Clear_fpt)(PRSSI_e);

typedef int(*PRSSI_Read_fpt)(PRSSI_e);

typedef void(*PRSSI_Write_fpt)(PRSSI_e, int);

// Structure Declaration
struct SYSCTL_PRSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRSSI_Write_fpt	write;

};

typedef struct SYSCTL_PRSSI_obj SYSCTL_PRSSI_t;

// Initializer
SYSCTL_PRSSI_t init_SYSCTL_PRSSI(void);


#endif // _PRSSI_h_

