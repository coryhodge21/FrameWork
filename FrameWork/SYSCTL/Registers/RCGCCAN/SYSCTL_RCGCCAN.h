/**********************************
* \file : RCGCCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCCAN_h_
#define _RCGCCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCCAN_BASE_ADDR	0x400FE634

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCCAN_Set_fpt)(RCGCCAN_e);

typedef void(*RCGCCAN_Clear_fpt)(RCGCCAN_e);

typedef int(*RCGCCAN_Read_fpt)(RCGCCAN_e);

typedef void(*RCGCCAN_Write_fpt)(RCGCCAN_e, int);

// Structure Declaration
struct SYSCTL_RCGCCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCCAN_Write_fpt	write;

};

typedef struct SYSCTL_RCGCCAN_obj SYSCTL_RCGCCAN_t;

// Initializer
SYSCTL_RCGCCAN_t init_SYSCTL_RCGCCAN(void);


#endif // _RCGCCAN_h_

