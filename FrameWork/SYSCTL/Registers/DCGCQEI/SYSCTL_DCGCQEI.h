/**********************************
* \file : DCGCQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCQEI_h_
#define _DCGCQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCQEI_BASE_ADDR	0x400FE844

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCQEI_Set_fpt)(DCGCQEI_e);

typedef void(*DCGCQEI_Clear_fpt)(DCGCQEI_e);

typedef int(*DCGCQEI_Read_fpt)(DCGCQEI_e);

typedef void(*DCGCQEI_Write_fpt)(DCGCQEI_e, int);

// Structure Declaration
struct SYSCTL_DCGCQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCQEI_Write_fpt	write;

};

typedef struct SYSCTL_DCGCQEI_obj SYSCTL_DCGCQEI_t;

// Initializer
SYSCTL_DCGCQEI_t init_SYSCTL_DCGCQEI(void);


#endif // _DCGCQEI_h_

