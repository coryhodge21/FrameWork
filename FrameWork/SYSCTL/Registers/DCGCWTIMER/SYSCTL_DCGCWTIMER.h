/**********************************
* \file : DCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCWTIMER_h_
#define _DCGCWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCWTIMER_BASE_ADDR	0x400FE85C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCWTIMER_Set_fpt)(DCGCWTIMER_e);

typedef void(*DCGCWTIMER_Clear_fpt)(DCGCWTIMER_e);

typedef int(*DCGCWTIMER_Read_fpt)(DCGCWTIMER_e);

typedef void(*DCGCWTIMER_Write_fpt)(DCGCWTIMER_e, int);

// Structure Declaration
struct SYSCTL_DCGCWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCWTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCWTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCWTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCWTIMER_Write_fpt	write;

};

typedef struct SYSCTL_DCGCWTIMER_obj SYSCTL_DCGCWTIMER_t;

// Initializer
SYSCTL_DCGCWTIMER_t init_SYSCTL_DCGCWTIMER(void);


#endif // _DCGCWTIMER_h_

