/**********************************
* \file : PPTIMER.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPTIMER_h_
#define _PPTIMER_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPTIMER_enums.h" 

// Base Address for this Register
#define SYSCTL_PPTIMER_BASE_ADDR	0x400FE304

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPTIMER_Set_fpt)(PPTIMER_e);

typedef void(*PPTIMER_Clear_fpt)(PPTIMER_e);

typedef int(*PPTIMER_Read_fpt)(PPTIMER_e);

typedef void(*PPTIMER_Write_fpt)(PPTIMER_e, int);

// Structure Declaration
struct SYSCTL_PPTIMER_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPTIMER_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPTIMER_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPTIMER_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPTIMER_Write_fpt	write;

};

typedef struct SYSCTL_PPTIMER_obj SYSCTL_PPTIMER_t;

// Initializer
SYSCTL_PPTIMER_t init_SYSCTL_PPTIMER(void);


#endif // _PPTIMER_h_

