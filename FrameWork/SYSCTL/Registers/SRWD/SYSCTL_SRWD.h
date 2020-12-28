/**********************************
* \file : SRWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRWD_h_
#define _SRWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRWD_enums.h" 

// Base Address for this Register
#define SYSCTL_SRWD_BASE_ADDR	0x400FE500

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRWD_Set_fpt)(SRWD_e);

typedef void(*SRWD_Clear_fpt)(SRWD_e);

typedef int(*SRWD_Read_fpt)(SRWD_e);

typedef void(*SRWD_Write_fpt)(SRWD_e, int);

// Structure Declaration
struct SYSCTL_SRWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRWD_Write_fpt	write;

};

typedef struct SYSCTL_SRWD_obj SYSCTL_SRWD_t;

// Initializer
SYSCTL_SRWD_t init_SYSCTL_SRWD(void);


#endif // _SRWD_h_

