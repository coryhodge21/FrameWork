/**********************************
* \file : DSLPCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSLPCLKCFG_h_
#define _DSLPCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DSLPCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_DSLPCLKCFG_BASE_ADDR	0x400FE144

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DSLPCLKCFG_Set_fpt)(DSLPCLKCFG_e);

typedef void(*DSLPCLKCFG_Clear_fpt)(DSLPCLKCFG_e);

typedef int(*DSLPCLKCFG_Read_fpt)(DSLPCLKCFG_e);

typedef void(*DSLPCLKCFG_Write_fpt)(DSLPCLKCFG_e, int);

// Structure Declaration
struct SYSCTL_DSLPCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DSLPCLKCFG_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DSLPCLKCFG_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DSLPCLKCFG_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DSLPCLKCFG_Write_fpt	write;

};

typedef struct SYSCTL_DSLPCLKCFG_obj SYSCTL_DSLPCLKCFG_t;

// Initializer
SYSCTL_DSLPCLKCFG_t init_SYSCTL_DSLPCLKCFG(void);


#endif // _DSLPCLKCFG_h_

