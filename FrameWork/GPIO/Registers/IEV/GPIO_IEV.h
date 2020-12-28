/**********************************
* \file : IEV.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _IEV_h_
#define _IEV_h_

//! \brief Enumerations for this Register
#include "GPIO_IEV_enums.h" 

// Base Address for this Register
#define GPIO_IEV_BASE_ADDR	0x0000040C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*IEV_Set_fpt)(IEV_e);

typedef void(*IEV_Clear_fpt)(IEV_e);

typedef int(*IEV_Read_fpt)(IEV_e);

typedef void(*IEV_Write_fpt)(IEV_e, int);

// Structure Declaration
struct GPIO_IEV_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	IEV_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 IEV_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	IEV_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	IEV_Write_fpt	write;

};

typedef struct GPIO_IEV_obj GPIO_IEV_t;

// Initializer
GPIO_IEV_t init_GPIO_IEV(void);


#endif // _IEV_h_

