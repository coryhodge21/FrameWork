/**********************************
* \file : RSCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RSCLKCFG_h_
#define _RSCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RSCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_RSCLKCFG_BASE_ADDR	0x400FE0B0

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RSCLKCFG_Set_fpt)(RSCLKCFG_e);

typedef void(*RSCLKCFG_Clear_fpt)(RSCLKCFG_e);

typedef int(*RSCLKCFG_Read_fpt)(RSCLKCFG_e);

typedef void(*RSCLKCFG_Write_fpt)(RSCLKCFG_e, int);

// Structure Declaration
struct SYSCTL_RSCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RSCLKCFG_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RSCLKCFG_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RSCLKCFG_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RSCLKCFG_Write_fpt	write;

};

typedef struct SYSCTL_RSCLKCFG_obj SYSCTL_RSCLKCFG_t;

// Initializer
SYSCTL_RSCLKCFG_t init_SYSCTL_RSCLKCFG(void);


#endif // _RSCLKCFG_h_

