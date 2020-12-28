/**********************************
* \file : PRWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRWTIMER_h_
#define _PRWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PRWTIMER_BASE_ADDR	0x400FEA5C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRWTIMER_Set_fpt)(PRWTIMER_e);

typedef void(*PRWTIMER_Clear_fpt)(PRWTIMER_e);

typedef int(*PRWTIMER_Read_fpt)(PRWTIMER_e);

typedef void(*PRWTIMER_Write_fpt)(PRWTIMER_e, int);

// Structure Declaration
struct SYSCTL_PRWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRWTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRWTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRWTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRWTIMER_Write_fpt	write;

};

typedef struct SYSCTL_PRWTIMER_obj SYSCTL_PRWTIMER_t;

// Initializer
SYSCTL_PRWTIMER_t init_SYSCTL_PRWTIMER(void);


#endif // _PRWTIMER_h_

