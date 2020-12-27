/**********************************
* \file : PPLCD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPLCD_h_
#define _PPLCD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPLCD_enums.h" 

// Base Address for this Register
#define SYSCTL_PPLCD_BASE_ADDR	0x400FE390

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPLCD_Set_fpt)(PPLCD_e);

typedef void(*PPLCD_Clear_fpt)(PPLCD_e);

typedef int(*PPLCD_Read_fpt)(PPLCD_e);

typedef void(*PPLCD_Write_fpt)(PPLCD_e, int);

// Structure Declaration
struct SYSCTL_PPLCD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPLCD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPLCD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPLCD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPLCD_Write_fpt	write;

};

typedef struct SYSCTL_PPLCD_obj SYSCTL_PPLCD_t;

// Initializer
SYSCTL_PPLCD_t init_SYSCTL_PPLCD(void);


#endif // _PPLCD_h_

