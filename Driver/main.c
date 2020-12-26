

/**
 * main.c
 */

#include <MOD_REG.h>


int main(void)
{
    MOD_REG_t Reg = init_MOD_REG();

    Reg.set(USB0);
    Reg.write(GPIOF, 1);
    int rval = Reg.read(GPIOC);


	return 0;
}
