/**********************************
* \file : PPSSI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPSSI_h_
#define _PPSSI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPSSI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPSSI_BASE_ADDR	0x400FE31C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPSSI_Set_fpt)(PPSSI_e);

typedef void(*PPSSI_Clear_fpt)(PPSSI_e);

typedef int(*PPSSI_Read_fpt)(PPSSI_e);

typedef void(*PPSSI_Write_fpt)(PPSSI_e, int);

// Structure Declaration
struct SYSCTL_PPSSI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPSSI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPSSI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPSSI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPSSI_Write_fpt	write;

};

typedef struct SYSCTL_PPSSI_obj SYSCTL_PPSSI_t;

// Initializer
SYSCTL_PPSSI_t init_SYSCTL_PPSSI(void);


#endif // _PPSSI_h_

