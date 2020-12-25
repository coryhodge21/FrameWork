/**
 * \file main.c
 * \author Cory W Hodge
 * \date 12/14/2020
 *
 * driver for mcu framework
 *
 *
 * TODO
 * 12/15/2020 Next Steps:
 *
 * test struct base address typedefs
 *  either volatile unisinged int * or just unsigned int
 *
 * then finish writing MODULE.h with proper regArr[REG_ARR_SIZE] or use
 * enums like register.h
 *
 * module will be optional in future, currently independant of register
 *
 * goal is to use syntax : Module.Register.action(Bit_Field);
 * while also keeping memory space in mind
 *
 * I will write a C program to read the ti provided mem maps for each
 * module/register. It will produce a library of files I refer to as
 * the FrameWork. Each one will mimick the files in this project, being:
 * Register.h
 * Register.c
 * Module.h
 * Module.c (to create upon return)
 *
 */

// Project Common Files
#include "prj_common.h"
#include "StructureV2/Module_Register.h"
#include "SYSCTL/Registers/RCGC2/SYSCTL_RCGC2.h"


/**
 * main.c
 */
int main(void)
{

//	MOD_REG_t Mod_Reg = init_ModReg();
//
//	Mod_Reg.set(GPIOD);


    while(1){

    }

	return 0;
}
