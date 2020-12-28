/**********************************
* \file : SCGCTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCTIMER_h_
#define _SCGCTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCTIMER_BASE_ADDR	0x400FE704

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCTIMER_Set_fpt)(SCGCTIMER_e);

typedef void(*SCGCTIMER_Clear_fpt)(SCGCTIMER_e);

typedef int(*SCGCTIMER_Read_fpt)(SCGCTIMER_e);

typedef void(*SCGCTIMER_Write_fpt)(SCGCTIMER_e, int);

// Structure Declaration
struct SYSCTL_SCGCTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCTIMER_Write_fpt	write;

};

typedef struct SYSCTL_SCGCTIMER_obj SYSCTL_SCGCTIMER_t;

// Initializer
SYSCTL_SCGCTIMER_t init_SYSCTL_SCGCTIMER(void);


#endif // _SCGCTIMER_h_

