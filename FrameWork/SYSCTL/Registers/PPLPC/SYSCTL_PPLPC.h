/**********************************
* \file : PPLPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPLPC_h_
#define _PPLPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPLPC_enums.h" 

// Base Address for this Register
#define SYSCTL_PPLPC_BASE_ADDR	0x400FE348

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPLPC_Set_fpt)(PPLPC_e);

typedef void(*PPLPC_Clear_fpt)(PPLPC_e);

typedef int(*PPLPC_Read_fpt)(PPLPC_e);

typedef void(*PPLPC_Write_fpt)(PPLPC_e, int);

// Structure Declaration
struct SYSCTL_PPLPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPLPC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPLPC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPLPC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPLPC_Write_fpt	write;

};

typedef struct SYSCTL_PPLPC_obj SYSCTL_PPLPC_t;

// Initializer
SYSCTL_PPLPC_t init_SYSCTL_PPLPC(void);


#endif // _PPLPC_h_

