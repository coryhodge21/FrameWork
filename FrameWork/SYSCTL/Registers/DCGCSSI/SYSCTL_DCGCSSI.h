/**********************************
* \file : DCGCSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCSSI_h_
#define _DCGCSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCSSI_BASE_ADDR	0x400FE81C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCSSI_Set_fpt)(DCGCSSI_e);

typedef void(*DCGCSSI_Clear_fpt)(DCGCSSI_e);

typedef int(*DCGCSSI_Read_fpt)(DCGCSSI_e);

typedef void(*DCGCSSI_Write_fpt)(DCGCSSI_e, int);

// Structure Declaration
struct SYSCTL_DCGCSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCSSI_Write_fpt	write;

};

typedef struct SYSCTL_DCGCSSI_obj SYSCTL_DCGCSSI_t;

// Initializer
SYSCTL_DCGCSSI_t init_SYSCTL_DCGCSSI(void);


#endif // _DCGCSSI_h_

