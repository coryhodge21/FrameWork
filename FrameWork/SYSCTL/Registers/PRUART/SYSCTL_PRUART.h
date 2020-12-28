/**********************************
* \file : PRUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRUART_h_
#define _PRUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRUART_enums.h" 

// Base Address for this Register
#define SYSCTL_PRUART_BASE_ADDR	0x400FEA18

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRUART_Set_fpt)(PRUART_e);

typedef void(*PRUART_Clear_fpt)(PRUART_e);

typedef int(*PRUART_Read_fpt)(PRUART_e);

typedef void(*PRUART_Write_fpt)(PRUART_e, int);

// Structure Declaration
struct SYSCTL_PRUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRUART_Write_fpt	write;

};

typedef struct SYSCTL_PRUART_obj SYSCTL_PRUART_t;

// Initializer
SYSCTL_PRUART_t init_SYSCTL_PRUART(void);


#endif // _PRUART_h_

