/**********************************
* \file : RCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCQEI_h_
#define _RCGCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCQEI_BASE_ADDR	0x400FE644

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCQEI_Set_fpt)(RCGCQEI_e);

typedef void(*RCGCQEI_Clear_fpt)(RCGCQEI_e);

typedef int(*RCGCQEI_Read_fpt)(RCGCQEI_e);

typedef void(*RCGCQEI_Write_fpt)(RCGCQEI_e, int);

// Structure Declaration
struct SYSCTL_RCGCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCQEI_Write_fpt	write;

};

typedef struct SYSCTL_RCGCQEI_obj SYSCTL_RCGCQEI_t;

// Initializer
SYSCTL_RCGCQEI_t init_SYSCTL_RCGCQEI(void);


#endif // _RCGCQEI_h_

