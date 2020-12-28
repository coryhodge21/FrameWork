/**********************************
* \file : SRQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRQEI_h_
#define _SRQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_SRQEI_BASE_ADDR	0x400FE544

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRQEI_Set_fpt)(SRQEI_e);

typedef void(*SRQEI_Clear_fpt)(SRQEI_e);

typedef int(*SRQEI_Read_fpt)(SRQEI_e);

typedef void(*SRQEI_Write_fpt)(SRQEI_e, int);

// Structure Declaration
struct SYSCTL_SRQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRQEI_Write_fpt	write;

};

typedef struct SYSCTL_SRQEI_obj SYSCTL_SRQEI_t;

// Initializer
SYSCTL_SRQEI_t init_SYSCTL_SRQEI(void);


#endif // _SRQEI_h_

