/**********************************
* \file : PPUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPUART_h_
#define _PPUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPUART_enums.h" 

// Base Address for this Register
#define SYSCTL_PPUART_BASE_ADDR	0x400FE318

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPUART_Set_fpt)(PPUART_e);

typedef void(*PPUART_Clear_fpt)(PPUART_e);

typedef int(*PPUART_Read_fpt)(PPUART_e);

typedef void(*PPUART_Write_fpt)(PPUART_e, int);

// Structure Declaration
struct SYSCTL_PPUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPUART_Write_fpt	write;

};

typedef struct SYSCTL_PPUART_obj SYSCTL_PPUART_t;

// Initializer
SYSCTL_PPUART_t init_SYSCTL_PPUART(void);


#endif // _PPUART_h_

