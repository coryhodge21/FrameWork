/**********************************
* \file : EMACMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _EMACMPC_h_
#define _EMACMPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_EMACMPC_enums.h" 

// Base Address for this Register
#define SYSCTL_EMACMPC_BASE_ADDR	0x400FE28C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*EMACMPC_Set_fpt)(EMACMPC_e);

typedef void(*EMACMPC_Clear_fpt)(EMACMPC_e);

typedef int(*EMACMPC_Read_fpt)(EMACMPC_e);

typedef void(*EMACMPC_Write_fpt)(EMACMPC_e, int);

// Structure Declaration
struct SYSCTL_EMACMPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	EMACMPC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 EMACMPC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	EMACMPC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	EMACMPC_Write_fpt	write;

};

typedef struct SYSCTL_EMACMPC_obj SYSCTL_EMACMPC_t;

// Initializer
SYSCTL_EMACMPC_t init_SYSCTL_EMACMPC(void);


#endif // _EMACMPC_h_

