/**********************************
* \file : PROWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PROWIRE_h_
#define _PROWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PROWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_PROWIRE_BASE_ADDR	0x400FEA98

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PROWIRE_Set_fpt)(PROWIRE_e);

typedef void(*PROWIRE_Clear_fpt)(PROWIRE_e);

typedef int(*PROWIRE_Read_fpt)(PROWIRE_e);

typedef void(*PROWIRE_Write_fpt)(PROWIRE_e, int);

// Structure Declaration
struct SYSCTL_PROWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PROWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PROWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PROWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PROWIRE_Write_fpt	write;

};

typedef struct SYSCTL_PROWIRE_obj SYSCTL_PROWIRE_t;

// Initializer
SYSCTL_PROWIRE_t init_SYSCTL_PROWIRE(void);


#endif // _PROWIRE_h_

