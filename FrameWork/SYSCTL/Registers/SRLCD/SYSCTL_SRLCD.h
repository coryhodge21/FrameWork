/**********************************
* \file : SRLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRLCD_h_
#define _SRLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_SRLCD_BASE_ADDR	0x400FE590

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRLCD_Set_fpt)(SRLCD_e);

typedef void(*SRLCD_Clear_fpt)(SRLCD_e);

typedef int(*SRLCD_Read_fpt)(SRLCD_e);

typedef void(*SRLCD_Write_fpt)(SRLCD_e, int);

// Structure Declaration
struct SYSCTL_SRLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRLCD_Write_fpt	write;

};

typedef struct SYSCTL_SRLCD_obj SYSCTL_SRLCD_t;

// Initializer
SYSCTL_SRLCD_t init_SYSCTL_SRLCD(void);


#endif // _SRLCD_h_

