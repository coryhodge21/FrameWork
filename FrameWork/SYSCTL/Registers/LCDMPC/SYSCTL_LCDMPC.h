/**********************************
* \file : LCDMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LCDMPC_h_
#define _LCDMPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_LCDMPC_enums.h" 

// Base Address for this Register
#define SYSCTL_LCDMPC_BASE_ADDR	0x400FE294

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*LCDMPC_Set_fpt)(LCDMPC_e);

typedef void(*LCDMPC_Clear_fpt)(LCDMPC_e);

typedef int(*LCDMPC_Read_fpt)(LCDMPC_e);

typedef void(*LCDMPC_Write_fpt)(LCDMPC_e, int);

// Structure Declaration
struct SYSCTL_LCDMPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	LCDMPC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 LCDMPC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	LCDMPC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	LCDMPC_Write_fpt	write;

};

typedef struct SYSCTL_LCDMPC_obj SYSCTL_LCDMPC_t;

// Initializer
SYSCTL_LCDMPC_t init_SYSCTL_LCDMPC(void);


#endif // _LCDMPC_h_

