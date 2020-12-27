/**********************************
* \file : RIS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RIS_h_
#define _RIS_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RIS_enums.h" 

// Base Address for this Register
#define SYSCTL_RIS_BASE_ADDR	0x400FE050

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RIS_Set_fpt)(RIS_e);

typedef void(*RIS_Clear_fpt)(RIS_e);

typedef int(*RIS_Read_fpt)(RIS_e);

typedef void(*RIS_Write_fpt)(RIS_e, int);

// Structure Declaration
struct SYSCTL_RIS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RIS_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RIS_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RIS_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RIS_Write_fpt	write;

};

typedef struct SYSCTL_RIS_obj SYSCTL_RIS_t;

// Initializer
SYSCTL_RIS_t init_SYSCTL_RIS(void);


#endif // _RIS_h_

