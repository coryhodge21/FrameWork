/**********************************
* \file : SRWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRWTIMER_h_
#define _SRWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SRWTIMER_BASE_ADDR	0x400FE55C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRWTIMER_Set_fpt)(SRWTIMER_e);

typedef void(*SRWTIMER_Clear_fpt)(SRWTIMER_e);

typedef int(*SRWTIMER_Read_fpt)(SRWTIMER_e);

typedef void(*SRWTIMER_Write_fpt)(SRWTIMER_e, int);

// Structure Declaration
struct SYSCTL_SRWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRWTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRWTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRWTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRWTIMER_Write_fpt	write;

};

typedef struct SYSCTL_SRWTIMER_obj SYSCTL_SRWTIMER_t;

// Initializer
SYSCTL_SRWTIMER_t init_SYSCTL_SRWTIMER(void);


#endif // _SRWTIMER_h_

