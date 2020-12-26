/**********************************
* \file : PPPECI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPPECI_h_
#define _PPPECI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPPECI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPPECI_BASE_ADDR	0x400FE350

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPPECI_Set_fpt)(PPPECI_e);

typedef void(*PPPECI_Clear_fpt)(PPPECI_e);

typedef int(*PPPECI_Read_fpt)(PPPECI_e);

typedef void(*PPPECI_Write_fpt)(PPPECI_e, int);

// Structure Declaration
struct SYSCTL_PPPECI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPPECI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPPECI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPPECI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPPECI_Write_fpt	write;

};

typedef struct SYSCTL_PPPECI_obj SYSCTL_PPPECI_t;

// Initializer
SYSCTL_PPPECI_t init_SYSCTL_PPPECI(void);


#endif // _PPPECI_h_

