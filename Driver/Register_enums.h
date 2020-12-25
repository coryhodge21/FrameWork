/*
 *
 * Replace Mask Names with actual values
 */

#ifndef REGISTER_ENUMS_H_
#define REGISTER_ENUMS_H_

//! \brief Enumerations listing the available bit field masks.
typedef enum {

    USB0   =    SYSCTL_RCGC2_USB0,  // USB0 Clock Gating Contro
    UDMA   =    SYSCTL_RCGC2_UDMA,  // Micro-DMA Clock Gating Control
    GPIOJ  =    SYSCTL_RCGC2_GPIOJ,  // Port J Clock Gating Control
    GPIOH  =    SYSCTL_RCGC2_GPIOH,  // Port H Clock Gating Control
    GPIOG  =    SYSCTL_RCGC2_GPIOG,  // Port G Clock Gating Control
    GPIOF  =    SYSCTL_RCGC2_GPIOF,  // Port F Clock Gating Control
    GPIOE  =    SYSCTL_RCGC2_GPIOE,  // Port E Clock Gating Control
    GPIOD  =    SYSCTL_RCGC2_GPIOD,  // Port D Clock Gating Control
    GPIOC  =    SYSCTL_RCGC2_GPIOC,  // Port C Clock Gating Control
    GPIOB  =    SYSCTL_RCGC2_GPIOB,  // Port B Clock Gating Control
    GPIOA  =    SYSCTL_RCGC2_GPIOA   // Port A Clock Gating Control

}Reg_BF_e;



#endif /* REGISTER_ENUMS_H_ */
