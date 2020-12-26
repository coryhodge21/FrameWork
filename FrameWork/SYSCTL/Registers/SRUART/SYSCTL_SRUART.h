/**********************************
* \file : SRUART.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRUART_h_
#define _SRUART_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRUART_enums.h" 

// Base Address for this Register
#define SYSCTL_SRUART_BASE_ADDR	0x400FE518

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRUART_Set_fpt)(SRUART_e);

typedef void(*SRUART_Clear_fpt)(SRUART_e);

typedef int(*SRUART_Read_fpt)(SRUART_e);

typedef void(*SRUART_Write_fpt)(SRUART_e, int);

// Structure Declaration
struct SYSCTL_SRUART_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRUART_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRUART_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRUART_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRUART_Write_fpt	write;

};

typedef struct SYSCTL_SRUART_obj SYSCTL_SRUART_t;

// Initializer
SYSCTL_SRUART_t init_SYSCTL_SRUART(void);


#endif // _SRUART_h_

