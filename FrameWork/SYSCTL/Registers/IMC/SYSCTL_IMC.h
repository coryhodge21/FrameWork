/**********************************
* \file : IMC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IMC_h_
#define _IMC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_IMC_enums.h" 

// Base Address for this Register
#define SYSCTL_IMC_BASE_ADDR	0x400FE054

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*IMC_Set_fpt)(IMC_e);

typedef void(*IMC_Clear_fpt)(IMC_e);

typedef int(*IMC_Read_fpt)(IMC_e);

typedef void(*IMC_Write_fpt)(IMC_e, int);

// Structure Declaration
struct SYSCTL_IMC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	IMC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 IMC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	IMC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	IMC_Write_fpt	write;

};

typedef struct SYSCTL_IMC_obj SYSCTL_IMC_t;

// Initializer
SYSCTL_IMC_t init_SYSCTL_IMC(void);


#endif // _IMC_h_

