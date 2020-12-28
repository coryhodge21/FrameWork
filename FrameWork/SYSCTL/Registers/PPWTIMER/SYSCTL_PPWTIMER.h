/**********************************
* \file : PPWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPWTIMER_h_
#define _PPWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PPWTIMER_BASE_ADDR	0x400FE35C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPWTIMER_Set_fpt)(PPWTIMER_e);

typedef void(*PPWTIMER_Clear_fpt)(PPWTIMER_e);

typedef int(*PPWTIMER_Read_fpt)(PPWTIMER_e);

typedef void(*PPWTIMER_Write_fpt)(PPWTIMER_e, int);

// Structure Declaration
struct SYSCTL_PPWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPWTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPWTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPWTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPWTIMER_Write_fpt	write;

};

typedef struct SYSCTL_PPWTIMER_obj SYSCTL_PPWTIMER_t;

// Initializer
SYSCTL_PPWTIMER_t init_SYSCTL_PPWTIMER(void);


#endif // _PPWTIMER_h_

