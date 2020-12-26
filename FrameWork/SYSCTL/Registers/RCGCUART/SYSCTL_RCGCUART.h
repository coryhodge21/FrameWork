/**********************************
* \file : RCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCUART_h_
#define _RCGCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCUART_BASE_ADDR	0x400FE618

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCUART_Set_fpt)(RCGCUART_e);

typedef void(*RCGCUART_Clear_fpt)(RCGCUART_e);

typedef int(*RCGCUART_Read_fpt)(RCGCUART_e);

typedef void(*RCGCUART_Write_fpt)(RCGCUART_e, int);

// Structure Declaration
struct SYSCTL_RCGCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCUART_Write_fpt	write;

};

typedef struct SYSCTL_RCGCUART_obj SYSCTL_RCGCUART_t;

// Initializer
SYSCTL_RCGCUART_t init_SYSCTL_RCGCUART(void);


#endif // _RCGCUART_h_

