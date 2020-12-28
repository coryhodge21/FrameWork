/**********************************
* \file : DIVSCLK.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DIVSCLK_h_
#define _DIVSCLK_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DIVSCLK_enums.h" 

// Base Address for this Register
#define SYSCTL_DIVSCLK_BASE_ADDR	0x400FE148

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DIVSCLK_Set_fpt)(DIVSCLK_e);

typedef void(*DIVSCLK_Clear_fpt)(DIVSCLK_e);

typedef int(*DIVSCLK_Read_fpt)(DIVSCLK_e);

typedef void(*DIVSCLK_Write_fpt)(DIVSCLK_e, int);

// Structure Declaration
struct SYSCTL_DIVSCLK_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DIVSCLK_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DIVSCLK_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DIVSCLK_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DIVSCLK_Write_fpt	write;

};

typedef struct SYSCTL_DIVSCLK_obj SYSCTL_DIVSCLK_t;

// Initializer
SYSCTL_DIVSCLK_t init_SYSCTL_DIVSCLK(void);


#endif // _DIVSCLK_h_

