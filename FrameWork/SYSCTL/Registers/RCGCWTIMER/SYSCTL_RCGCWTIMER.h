/**********************************
* \file : RCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCWTIMER_h_
#define _RCGCWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCWTIMER_BASE_ADDR	0x400FE65C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCWTIMER_Set_fpt)(RCGCWTIMER_e);

typedef void(*RCGCWTIMER_Clear_fpt)(RCGCWTIMER_e);

typedef int(*RCGCWTIMER_Read_fpt)(RCGCWTIMER_e);

typedef void(*RCGCWTIMER_Write_fpt)(RCGCWTIMER_e, int);

// Structure Declaration
struct SYSCTL_RCGCWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCWTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCWTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCWTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCWTIMER_Write_fpt	write;

};

typedef struct SYSCTL_RCGCWTIMER_obj SYSCTL_RCGCWTIMER_t;

// Initializer
SYSCTL_RCGCWTIMER_t init_SYSCTL_RCGCWTIMER(void);


#endif // _RCGCWTIMER_h_

