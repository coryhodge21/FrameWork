/**********************************
* \file : PPHIM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPHIM_h_
#define _PPHIM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPHIM_enums.h" 

// Base Address for this Register
#define SYSCTL_PPHIM_BASE_ADDR	0x400FE3A4

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPHIM_Set_fpt)(PPHIM_e);

typedef void(*PPHIM_Clear_fpt)(PPHIM_e);

typedef int(*PPHIM_Read_fpt)(PPHIM_e);

typedef void(*PPHIM_Write_fpt)(PPHIM_e, int);

// Structure Declaration
struct SYSCTL_PPHIM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPHIM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPHIM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPHIM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPHIM_Write_fpt	write;

};

typedef struct SYSCTL_PPHIM_obj SYSCTL_PPHIM_t;

// Initializer
SYSCTL_PPHIM_t init_SYSCTL_PPHIM(void);


#endif // _PPHIM_h_

