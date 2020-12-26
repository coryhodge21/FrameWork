/**********************************
* \file : SCGCWTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCWTIMER_h_
#define _SCGCWTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCWTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCWTIMER_BASE_ADDR	0x400FE75C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCWTIMER_Set_fpt)(SCGCWTIMER_e);

typedef void(*SCGCWTIMER_Clear_fpt)(SCGCWTIMER_e);

typedef int(*SCGCWTIMER_Read_fpt)(SCGCWTIMER_e);

typedef void(*SCGCWTIMER_Write_fpt)(SCGCWTIMER_e, int);

// Structure Declaration
struct SYSCTL_SCGCWTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCWTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCWTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCWTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCWTIMER_Write_fpt	write;

};

typedef struct SYSCTL_SCGCWTIMER_obj SYSCTL_SCGCWTIMER_t;

// Initializer
SYSCTL_SCGCWTIMER_t init_SYSCTL_SCGCWTIMER(void);


#endif // _SCGCWTIMER_h_

