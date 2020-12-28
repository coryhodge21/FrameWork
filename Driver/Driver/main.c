
#include "SYSCTL/Registers/RCGC2/SYSCTL_RCGC2.h"
/**
 * main.c
 */
int main(void)
{

    SYSCTL_RCGC2_t sysctl_rcgc2 = init_SYSCTL_RCGC2();

    sysctl_rcgc2.set(GPIOF);

    sysctl_rcgc2.clear(GPIOF);

    sysctl_rcgc2.set(GPIOF);


int x = 5;

int y = x;

x++;

	return 0;
}
