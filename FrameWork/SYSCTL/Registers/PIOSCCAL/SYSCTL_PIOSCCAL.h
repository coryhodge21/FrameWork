/**********************************
* \file : PIOSCCAL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PIOSCCAL_h_
#define _PIOSCCAL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PIOSCCAL_enums.h" 

// Base Address for this Register
#define SYSCTL_PIOSCCAL_BASE_ADDR	0x400FE150

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PIOSCCAL_Set_fpt)(PIOSCCAL_e);

typedef void(*PIOSCCAL_Clear_fpt)(PIOSCCAL_e);

typedef int(*PIOSCCAL_Read_fpt)(PIOSCCAL_e);

typedef void(*PIOSCCAL_Write_fpt)(PIOSCCAL_e, int);

// Structure Declaration
struct SYSCTL_PIOSCCAL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PIOSCCAL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PIOSCCAL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PIOSCCAL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PIOSCCAL_Write_fpt	write;

};

typedef struct SYSCTL_PIOSCCAL_obj SYSCTL_PIOSCCAL_t;

// Initializer
SYSCTL_PIOSCCAL_t init_SYSCTL_PIOSCCAL(void);


#endif // _PIOSCCAL_h_

