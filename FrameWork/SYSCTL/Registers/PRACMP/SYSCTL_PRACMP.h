/**********************************
* \file : PRACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRACMP_h_
#define _PRACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_PRACMP_BASE_ADDR	0x400FEA3C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRACMP_Set_fpt)(PRACMP_e);

typedef void(*PRACMP_Clear_fpt)(PRACMP_e);

typedef int(*PRACMP_Read_fpt)(PRACMP_e);

typedef void(*PRACMP_Write_fpt)(PRACMP_e, int);

// Structure Declaration
struct SYSCTL_PRACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRACMP_Write_fpt	write;

};

typedef struct SYSCTL_PRACMP_obj SYSCTL_PRACMP_t;

// Initializer
SYSCTL_PRACMP_t init_SYSCTL_PRACMP(void);


#endif // _PRACMP_h_

