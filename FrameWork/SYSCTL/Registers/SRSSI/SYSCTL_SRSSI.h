/**********************************
* \file : SRSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRSSI_h_
#define _SRSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_SRSSI_BASE_ADDR	0x400FE51C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRSSI_Set_fpt)(SRSSI_e);

typedef void(*SRSSI_Clear_fpt)(SRSSI_e);

typedef int(*SRSSI_Read_fpt)(SRSSI_e);

typedef void(*SRSSI_Write_fpt)(SRSSI_e, int);

// Structure Declaration
struct SYSCTL_SRSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRSSI_Write_fpt	write;

};

typedef struct SYSCTL_SRSSI_obj SYSCTL_SRSSI_t;

// Initializer
SYSCTL_SRSSI_t init_SYSCTL_SRSSI(void);


#endif // _SRSSI_h_

