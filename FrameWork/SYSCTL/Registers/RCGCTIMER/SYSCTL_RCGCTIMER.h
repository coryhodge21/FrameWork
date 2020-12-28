/**********************************
* \file : RCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCTIMER_h_
#define _RCGCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCTIMER_BASE_ADDR	0x400FE604

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCTIMER_Set_fpt)(RCGCTIMER_e);

typedef void(*RCGCTIMER_Clear_fpt)(RCGCTIMER_e);

typedef int(*RCGCTIMER_Read_fpt)(RCGCTIMER_e);

typedef void(*RCGCTIMER_Write_fpt)(RCGCTIMER_e, int);

// Structure Declaration
struct SYSCTL_RCGCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCTIMER_Write_fpt	write;

};

typedef struct SYSCTL_RCGCTIMER_obj SYSCTL_RCGCTIMER_t;

// Initializer
SYSCTL_RCGCTIMER_t init_SYSCTL_RCGCTIMER(void);


#endif // _RCGCTIMER_h_

