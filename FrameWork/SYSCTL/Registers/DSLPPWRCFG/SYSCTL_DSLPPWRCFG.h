/**********************************
* \file : DSLPPWRCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSLPPWRCFG_h_
#define _DSLPPWRCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DSLPPWRCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_DSLPPWRCFG_BASE_ADDR	0x400FE18C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DSLPPWRCFG_Set_fpt)(DSLPPWRCFG_e);

typedef void(*DSLPPWRCFG_Clear_fpt)(DSLPPWRCFG_e);

typedef int(*DSLPPWRCFG_Read_fpt)(DSLPPWRCFG_e);

typedef void(*DSLPPWRCFG_Write_fpt)(DSLPPWRCFG_e, int);

// Structure Declaration
struct SYSCTL_DSLPPWRCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DSLPPWRCFG_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DSLPPWRCFG_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DSLPPWRCFG_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DSLPPWRCFG_Write_fpt	write;

};

typedef struct SYSCTL_DSLPPWRCFG_obj SYSCTL_DSLPPWRCFG_t;

// Initializer
SYSCTL_DSLPPWRCFG_t init_SYSCTL_DSLPPWRCFG(void);


#endif // _DSLPPWRCFG_h_

