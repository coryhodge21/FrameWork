/**********************************
* \file : ALTCLKCFG.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _ALTCLKCFG_h_
#define _ALTCLKCFG_h_

//! \brief Enumerations for this Register
#include "SYSCTL_ALTCLKCFG_enums.h" 

// Base Address for this Register
#define SYSCTL_ALTCLKCFG_BASE_ADDR	0x400FE138

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*ALTCLKCFG_Set_fpt)(ALTCLKCFG_e);

typedef void(*ALTCLKCFG_Clear_fpt)(ALTCLKCFG_e);

typedef int(*ALTCLKCFG_Read_fpt)(ALTCLKCFG_e);

typedef void(*ALTCLKCFG_Write_fpt)(ALTCLKCFG_e, int);

// Structure Declaration
struct SYSCTL_ALTCLKCFG_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	ALTCLKCFG_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 ALTCLKCFG_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	ALTCLKCFG_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	ALTCLKCFG_Write_fpt	write;

};

typedef struct SYSCTL_ALTCLKCFG_obj SYSCTL_ALTCLKCFG_t;

// Initializer
SYSCTL_ALTCLKCFG_t init_SYSCTL_ALTCLKCFG(void);


#endif // _ALTCLKCFG_h_

