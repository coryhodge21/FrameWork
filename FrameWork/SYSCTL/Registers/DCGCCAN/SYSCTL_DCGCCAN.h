/**********************************
* \file : DCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCCAN_h_
#define _DCGCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCCAN_BASE_ADDR	0x400FE834

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCCAN_Set_fpt)(DCGCCAN_e);

typedef void(*DCGCCAN_Clear_fpt)(DCGCCAN_e);

typedef int(*DCGCCAN_Read_fpt)(DCGCCAN_e);

typedef void(*DCGCCAN_Write_fpt)(DCGCCAN_e, int);

// Structure Declaration
struct SYSCTL_DCGCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCCAN_Write_fpt	write;

};

typedef struct SYSCTL_DCGCCAN_obj SYSCTL_DCGCCAN_t;

// Initializer
SYSCTL_DCGCCAN_t init_SYSCTL_DCGCCAN(void);


#endif // _DCGCCAN_h_

