/**********************************
* \file : SRTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRTIMER_h_
#define _SRTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SRTIMER_BASE_ADDR	0x400FE504

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRTIMER_Set_fpt)(SRTIMER_e);

typedef void(*SRTIMER_Clear_fpt)(SRTIMER_e);

typedef int(*SRTIMER_Read_fpt)(SRTIMER_e);

typedef void(*SRTIMER_Write_fpt)(SRTIMER_e, int);

// Structure Declaration
struct SYSCTL_SRTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRTIMER_Write_fpt	write;

};

typedef struct SYSCTL_SRTIMER_obj SYSCTL_SRTIMER_t;

// Initializer
SYSCTL_SRTIMER_t init_SYSCTL_SRTIMER(void);


#endif // _SRTIMER_h_

