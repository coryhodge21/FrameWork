/**********************************
* \file : PPQEI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPQEI_h_
#define _PPQEI_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPQEI_enums.h" 

// Base Address for this Register
#define SYSCTL_PPQEI_BASE_ADDR	0x400FE344

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPQEI_Set_fpt)(PPQEI_e);

typedef void(*PPQEI_Clear_fpt)(PPQEI_e);

typedef int(*PPQEI_Read_fpt)(PPQEI_e);

typedef void(*PPQEI_Write_fpt)(PPQEI_e, int);

// Structure Declaration
struct SYSCTL_PPQEI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPQEI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPQEI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPQEI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPQEI_Write_fpt	write;

};

typedef struct SYSCTL_PPQEI_obj SYSCTL_PPQEI_t;

// Initializer
SYSCTL_PPQEI_t init_SYSCTL_PPQEI(void);


#endif // _PPQEI_h_

