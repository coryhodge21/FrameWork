/**********************************
* \file : PP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PP_h_
#define _PP_h_

//! \brief Enumerations for this Register
#include "GPIO_PP_enums.h" 

// Base Address for this Register
#define GPIO_PP_BASE_ADDR	0x00000FC0

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PP_Set_fpt)(PP_e);

typedef void(*PP_Clear_fpt)(PP_e);

typedef int(*PP_Read_fpt)(PP_e);

typedef void(*PP_Write_fpt)(PP_e, int);

// Structure Declaration
struct GPIO_PP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PP_Write_fpt	write;

};

typedef struct GPIO_PP_obj GPIO_PP_t;

// Initializer
GPIO_PP_t init_GPIO_PP(void);


#endif // _PP_h_

