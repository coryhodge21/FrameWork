/**********************************
* \file : MEMTIM0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MEMTIM0_h_
#define _MEMTIM0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_MEMTIM0_enums.h" 

// Base Address for this Register
#define SYSCTL_MEMTIM0_BASE_ADDR	0x400FE0C0

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*MEMTIM0_Set_fpt)(MEMTIM0_e);

typedef void(*MEMTIM0_Clear_fpt)(MEMTIM0_e);

typedef int(*MEMTIM0_Read_fpt)(MEMTIM0_e);

typedef void(*MEMTIM0_Write_fpt)(MEMTIM0_e, int);

// Structure Declaration
struct SYSCTL_MEMTIM0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	MEMTIM0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 MEMTIM0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	MEMTIM0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	MEMTIM0_Write_fpt	write;

};

typedef struct SYSCTL_MEMTIM0_obj SYSCTL_MEMTIM0_t;

// Initializer
SYSCTL_MEMTIM0_t init_SYSCTL_MEMTIM0(void);


#endif // _MEMTIM0_h_

