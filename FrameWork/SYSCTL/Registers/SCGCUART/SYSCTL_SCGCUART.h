/**********************************
* \file : SCGCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCUART_h_
#define _SCGCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCUART_BASE_ADDR	0x400FE718

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCUART_Set_fpt)(SCGCUART_e);

typedef void(*SCGCUART_Clear_fpt)(SCGCUART_e);

typedef int(*SCGCUART_Read_fpt)(SCGCUART_e);

typedef void(*SCGCUART_Write_fpt)(SCGCUART_e, int);

// Structure Declaration
struct SYSCTL_SCGCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCUART_Write_fpt	write;

};

typedef struct SYSCTL_SCGCUART_obj SYSCTL_SCGCUART_t;

// Initializer
SYSCTL_SCGCUART_t init_SYSCTL_SCGCUART(void);


#endif // _SCGCUART_h_

