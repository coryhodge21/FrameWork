/**********************************
* \file : DSCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DSCLKCFG_h_
#define _DSCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DSCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_DSCLKCFG_BASE_ADDR	0x400FE144

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DSCLKCFG_Set_fpt)(DSCLKCFG_e);

typedef void(*DSCLKCFG_Clear_fpt)(DSCLKCFG_e);

typedef int(*DSCLKCFG_Read_fpt)(DSCLKCFG_e);

typedef void(*DSCLKCFG_Write_fpt)(DSCLKCFG_e, int);

// Structure Declaration
struct SYSCTL_DSCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DSCLKCFG_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DSCLKCFG_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DSCLKCFG_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DSCLKCFG_Write_fpt	write;

};

typedef struct SYSCTL_DSCLKCFG_obj SYSCTL_DSCLKCFG_t;

// Initializer
SYSCTL_DSCLKCFG_t init_SYSCTL_DSCLKCFG(void);


#endif // _DSCLKCFG_h_

