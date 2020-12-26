/**********************************
* \file : PCUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCUART_h_
#define _PCUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCUART_enums.h" 

// Base Address for this Register
#define SYSCTL_PCUART_BASE_ADDR	0x400FE918

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCUART_Set_fpt)(PCUART_e);

typedef void(*PCUART_Clear_fpt)(PCUART_e);

typedef int(*PCUART_Read_fpt)(PCUART_e);

typedef void(*PCUART_Write_fpt)(PCUART_e, int);

// Structure Declaration
struct SYSCTL_PCUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCUART_Write_fpt	write;

};

typedef struct SYSCTL_PCUART_obj SYSCTL_PCUART_t;

// Initializer
SYSCTL_PCUART_t init_SYSCTL_PCUART(void);


#endif // _PCUART_h_

