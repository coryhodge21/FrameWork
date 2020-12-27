/**********************************
* \file : PRUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRUSB_h_
#define _PRUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_PRUSB_BASE_ADDR	0x400FEA28

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRUSB_Set_fpt)(PRUSB_e);

typedef void(*PRUSB_Clear_fpt)(PRUSB_e);

typedef int(*PRUSB_Read_fpt)(PRUSB_e);

typedef void(*PRUSB_Write_fpt)(PRUSB_e, int);

// Structure Declaration
struct SYSCTL_PRUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRUSB_Write_fpt	write;

};

typedef struct SYSCTL_PRUSB_obj SYSCTL_PRUSB_t;

// Initializer
SYSCTL_PRUSB_t init_SYSCTL_PRUSB(void);


#endif // _PRUSB_h_

