/**********************************
* \file : SRUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRUSB_h_
#define _SRUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_SRUSB_BASE_ADDR	0x400FE528

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRUSB_Set_fpt)(SRUSB_e);

typedef void(*SRUSB_Clear_fpt)(SRUSB_e);

typedef int(*SRUSB_Read_fpt)(SRUSB_e);

typedef void(*SRUSB_Write_fpt)(SRUSB_e, int);

// Structure Declaration
struct SYSCTL_SRUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRUSB_Write_fpt	write;

};

typedef struct SYSCTL_SRUSB_obj SYSCTL_SRUSB_t;

// Initializer
SYSCTL_SRUSB_t init_SYSCTL_SRUSB(void);


#endif // _SRUSB_h_

