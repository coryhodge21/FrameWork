/**********************************
* \file : SCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCSSI_h_
#define _SCGCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCSSI_BASE_ADDR	0x400FE71C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCSSI_Set_fpt)(SCGCSSI_e);

typedef void(*SCGCSSI_Clear_fpt)(SCGCSSI_e);

typedef int(*SCGCSSI_Read_fpt)(SCGCSSI_e);

typedef void(*SCGCSSI_Write_fpt)(SCGCSSI_e, int);

// Structure Declaration
struct SYSCTL_SCGCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCSSI_Write_fpt	write;

};

typedef struct SYSCTL_SCGCSSI_obj SYSCTL_SCGCSSI_t;

// Initializer
SYSCTL_SCGCSSI_t init_SYSCTL_SCGCSSI(void);


#endif // _SCGCSSI_h_

