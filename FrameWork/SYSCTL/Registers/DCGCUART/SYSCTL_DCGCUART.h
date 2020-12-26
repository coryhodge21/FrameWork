/**********************************
* \file : DCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCUART_h_
#define _DCGCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCUART_BASE_ADDR	0x400FE818

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCUART_Set_fpt)(DCGCUART_e);

typedef void(*DCGCUART_Clear_fpt)(DCGCUART_e);

typedef int(*DCGCUART_Read_fpt)(DCGCUART_e);

typedef void(*DCGCUART_Write_fpt)(DCGCUART_e, int);

// Structure Declaration
struct SYSCTL_DCGCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCUART_Write_fpt	write;

};

typedef struct SYSCTL_DCGCUART_obj SYSCTL_DCGCUART_t;

// Initializer
SYSCTL_DCGCUART_t init_SYSCTL_DCGCUART(void);


#endif // _DCGCUART_h_

