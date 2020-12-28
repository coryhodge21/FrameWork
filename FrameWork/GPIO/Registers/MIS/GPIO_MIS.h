/**********************************
* \file : MIS.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MIS_h_
#define _MIS_h_

//! \brief Enumerations for this Register
#include "GPIO_MIS_enums.h" 

// Base Address for this Register
#define GPIO_MIS_BASE_ADDR	0x00000418

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*MIS_Set_fpt)(MIS_e);

typedef void(*MIS_Clear_fpt)(MIS_e);

typedef int(*MIS_Read_fpt)(MIS_e);

typedef void(*MIS_Write_fpt)(MIS_e, int);

// Structure Declaration
struct GPIO_MIS_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	MIS_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 MIS_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	MIS_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	MIS_Write_fpt	write;

};

typedef struct GPIO_MIS_obj GPIO_MIS_t;

// Initializer
GPIO_MIS_t init_GPIO_MIS(void);


#endif // _MIS_h_

