

/**
 * main.c
 */

#include "MOD_REG.h"
#include "Output.h"


int main(void)
{
    MOD_REG_t Reg = init_MOD_REG();

    Reg.set(USB0x);
    Reg.write(GPIOFx, 1);
    int rval = Reg.read(GPIOCx);

SYSCTL_RCGC2_t Sys_rcgc2;

Sys_rcgc2 = init_SYSCTL_RCGC2();

Sys_rcgc2.set(GPIOF);


	return 0;
}
