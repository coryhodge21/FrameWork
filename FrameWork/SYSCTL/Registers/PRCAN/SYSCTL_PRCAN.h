/**********************************
* \file : PRCAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRCAN_h_
#define _PRCAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRCAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PRCAN_BASE_ADDR	0x400FEA34

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRCAN_Set_fpt)(PRCAN_e);

typedef void(*PRCAN_Clear_fpt)(PRCAN_e);

typedef int(*PRCAN_Read_fpt)(PRCAN_e);

typedef void(*PRCAN_Write_fpt)(PRCAN_e, int);

// Structure Declaration
struct SYSCTL_PRCAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRCAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRCAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRCAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRCAN_Write_fpt	write;

};

typedef struct SYSCTL_PRCAN_obj SYSCTL_PRCAN_t;

// Initializer
SYSCTL_PRCAN_t init_SYSCTL_PRCAN(void);


#endif // _PRCAN_h_

