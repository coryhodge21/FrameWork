/**********************************
* \file : SROWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SROWIRE_h_
#define _SROWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SROWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_SROWIRE_BASE_ADDR	0x400FE598

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SROWIRE_Set_fpt)(SROWIRE_e);

typedef void(*SROWIRE_Clear_fpt)(SROWIRE_e);

typedef int(*SROWIRE_Read_fpt)(SROWIRE_e);

typedef void(*SROWIRE_Write_fpt)(SROWIRE_e, int);

// Structure Declaration
struct SYSCTL_SROWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SROWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SROWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SROWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SROWIRE_Write_fpt	write;

};

typedef struct SYSCTL_SROWIRE_obj SYSCTL_SROWIRE_t;

// Initializer
SYSCTL_SROWIRE_t init_SYSCTL_SROWIRE(void);


#endif // _SROWIRE_h_

