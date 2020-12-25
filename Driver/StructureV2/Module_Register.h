/*
 * Register.h
 *
 *  Created on: Dec 25, 2020
 *      Author: coryhodge
 */

#ifndef STRUCTUREV2_MODULE_REGISTER_H_
#define STRUCTUREV2_MODULE_REGISTER_H_

#include "prj_common.h"
#include "Module_Register_enums.h"

#define MOD_REG_BASE_ADDR 0x00000000

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*Set_fpt)(BF_e);

typedef void(*Clear_fpt)(BF_e);

typedef int32_t(*Read_fpt)(BF_e);

typedef void(*Write_fpt)(BF_e, int32_t);


/**
 * Structure Decleration
 */
struct MOD_REG_obj {

   // Address of Register
   Reg_Addr_t REG_BASE_ADDR;

   // function pointers to operations
   // 	used for modifying Register BitFields

   // Set
   Set_fpt set;

   // Clear
   Clear_fpt clear;

   // Read
   Read_fpt read;

   // Write
   Write_fpt write;

};

typedef struct MOD_REG_obj MOD_REG_t;

// Initializer
MOD_REG_t init_ModReg(void);


#endif /* STRUCTUREV2_MODULE_REGISTER_H_ */
