/**********************************
* \file : PIOSCSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PIOSCSTAT_h_
#define _PIOSCSTAT_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PIOSCSTAT_enums.h" 

// Base Address for this Register
#define SYSCTL_PIOSCSTAT_BASE_ADDR	0x400FE154

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PIOSCSTAT_Set_fpt)(PIOSCSTAT_e);

typedef void(*PIOSCSTAT_Clear_fpt)(PIOSCSTAT_e);

typedef int(*PIOSCSTAT_Read_fpt)(PIOSCSTAT_e);

typedef void(*PIOSCSTAT_Write_fpt)(PIOSCSTAT_e, int);

// Structure Declaration
struct SYSCTL_PIOSCSTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PIOSCSTAT_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PIOSCSTAT_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PIOSCSTAT_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PIOSCSTAT_Write_fpt	write;

};

typedef struct SYSCTL_PIOSCSTAT_obj SYSCTL_PIOSCSTAT_t;

// Initializer
SYSCTL_PIOSCSTAT_t init_SYSCTL_PIOSCSTAT(void);


#endif // _PIOSCSTAT_h_

