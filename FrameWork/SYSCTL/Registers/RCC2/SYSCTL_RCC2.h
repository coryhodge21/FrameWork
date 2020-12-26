/**********************************
* \file : RCC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCC2_h_
#define _RCC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCC2_enums.h" 

// Base Address for this Register
#define SYSCTL_RCC2_BASE_ADDR	0x400FE070

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCC2_Set_fpt)(RCC2_e);

typedef void(*RCC2_Clear_fpt)(RCC2_e);

typedef int(*RCC2_Read_fpt)(RCC2_e);

typedef void(*RCC2_Write_fpt)(RCC2_e, int);

// Structure Declaration
struct SYSCTL_RCC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCC2_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCC2_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCC2_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCC2_Write_fpt	write;

};

typedef struct SYSCTL_RCC2_obj SYSCTL_RCC2_t;

// Initializer
SYSCTL_RCC2_t init_SYSCTL_RCC2(void);


#endif // _RCC2_h_

