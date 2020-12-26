/**********************************
* \file : PCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCSSI_h_
#define _PCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_PCSSI_BASE_ADDR	0x400FE91C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCSSI_Set_fpt)(PCSSI_e);

typedef void(*PCSSI_Clear_fpt)(PCSSI_e);

typedef int(*PCSSI_Read_fpt)(PCSSI_e);

typedef void(*PCSSI_Write_fpt)(PCSSI_e, int);

// Structure Declaration
struct SYSCTL_PCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCSSI_Write_fpt	write;

};

typedef struct SYSCTL_PCSSI_obj SYSCTL_PCSSI_t;

// Initializer
SYSCTL_PCSSI_t init_SYSCTL_PCSSI(void);


#endif // _PCSSI_h_

