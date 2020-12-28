/**********************************
* \file : PRTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRTIMER_h_
#define _PRTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PRTIMER_BASE_ADDR	0x400FEA04

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRTIMER_Set_fpt)(PRTIMER_e);

typedef void(*PRTIMER_Clear_fpt)(PRTIMER_e);

typedef int(*PRTIMER_Read_fpt)(PRTIMER_e);

typedef void(*PRTIMER_Write_fpt)(PRTIMER_e, int);

// Structure Declaration
struct SYSCTL_PRTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRTIMER_Write_fpt	write;

};

typedef struct SYSCTL_PRTIMER_obj SYSCTL_PRTIMER_t;

// Initializer
SYSCTL_PRTIMER_t init_SYSCTL_PRTIMER(void);


#endif // _PRTIMER_h_

