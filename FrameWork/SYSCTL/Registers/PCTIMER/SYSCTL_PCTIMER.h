/**********************************
* \file : PCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCTIMER_h_
#define _PCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PCTIMER_BASE_ADDR	0x400FE904

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCTIMER_Set_fpt)(PCTIMER_e);

typedef void(*PCTIMER_Clear_fpt)(PCTIMER_e);

typedef int(*PCTIMER_Read_fpt)(PCTIMER_e);

typedef void(*PCTIMER_Write_fpt)(PCTIMER_e, int);

// Structure Declaration
struct SYSCTL_PCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCTIMER_Write_fpt	write;

};

typedef struct SYSCTL_PCTIMER_obj SYSCTL_PCTIMER_t;

// Initializer
SYSCTL_PCTIMER_t init_SYSCTL_PCTIMER(void);


#endif // _PCTIMER_h_

