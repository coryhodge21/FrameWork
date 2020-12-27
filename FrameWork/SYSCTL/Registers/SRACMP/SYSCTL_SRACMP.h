/**********************************
* \file : SRACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRACMP_h_
#define _SRACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_SRACMP_BASE_ADDR	0x400FE53C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRACMP_Set_fpt)(SRACMP_e);

typedef void(*SRACMP_Clear_fpt)(SRACMP_e);

typedef int(*SRACMP_Read_fpt)(SRACMP_e);

typedef void(*SRACMP_Write_fpt)(SRACMP_e, int);

// Structure Declaration
struct SYSCTL_SRACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRACMP_Write_fpt	write;

};

typedef struct SYSCTL_SRACMP_obj SYSCTL_SRACMP_t;

// Initializer
SYSCTL_SRACMP_t init_SYSCTL_SRACMP(void);


#endif // _SRACMP_h_

