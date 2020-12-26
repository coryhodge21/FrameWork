/**********************************
* \file : PPRTS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPRTS_h_
#define _PPRTS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPRTS_enums.h" 

// Base Address for this Register
#define SYSCTL_PPRTS_BASE_ADDR	0x400FE370

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPRTS_Set_fpt)(PPRTS_e);

typedef void(*PPRTS_Clear_fpt)(PPRTS_e);

typedef int(*PPRTS_Read_fpt)(PPRTS_e);

typedef void(*PPRTS_Write_fpt)(PPRTS_e, int);

// Structure Declaration
struct SYSCTL_PPRTS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPRTS_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPRTS_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPRTS_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPRTS_Write_fpt	write;

};

typedef struct SYSCTL_PPRTS_obj SYSCTL_PPRTS_t;

// Initializer
SYSCTL_PPRTS_t init_SYSCTL_PPRTS(void);


#endif // _PPRTS_h_

