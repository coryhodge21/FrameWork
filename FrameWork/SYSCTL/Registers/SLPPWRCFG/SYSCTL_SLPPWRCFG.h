/**********************************
* \file : SLPPWRCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SLPPWRCFG_h_
#define _SLPPWRCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SLPPWRCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_SLPPWRCFG_BASE_ADDR	0x400FE188

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SLPPWRCFG_Set_fpt)(SLPPWRCFG_e);

typedef void(*SLPPWRCFG_Clear_fpt)(SLPPWRCFG_e);

typedef int(*SLPPWRCFG_Read_fpt)(SLPPWRCFG_e);

typedef void(*SLPPWRCFG_Write_fpt)(SLPPWRCFG_e, int);

// Structure Declaration
struct SYSCTL_SLPPWRCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SLPPWRCFG_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SLPPWRCFG_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SLPPWRCFG_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SLPPWRCFG_Write_fpt	write;

};

typedef struct SYSCTL_SLPPWRCFG_obj SYSCTL_SLPPWRCFG_t;

// Initializer
SYSCTL_SLPPWRCFG_t init_SYSCTL_SLPPWRCFG(void);


#endif // _SLPPWRCFG_h_

