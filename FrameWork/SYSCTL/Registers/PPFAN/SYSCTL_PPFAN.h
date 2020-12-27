/**********************************
* \file : PPFAN.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPFAN_h_
#define _PPFAN_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPFAN_enums.h" 

// Base Address for this Register
#define SYSCTL_PPFAN_BASE_ADDR	0x400FE354

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPFAN_Set_fpt)(PPFAN_e);

typedef void(*PPFAN_Clear_fpt)(PPFAN_e);

typedef int(*PPFAN_Read_fpt)(PPFAN_e);

typedef void(*PPFAN_Write_fpt)(PPFAN_e, int);

// Structure Declaration
struct SYSCTL_PPFAN_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPFAN_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPFAN_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPFAN_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPFAN_Write_fpt	write;

};

typedef struct SYSCTL_PPFAN_obj SYSCTL_PPFAN_t;

// Initializer
SYSCTL_PPFAN_t init_SYSCTL_PPFAN(void);


#endif // _PPFAN_h_

