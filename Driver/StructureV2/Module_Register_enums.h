/*
 * Register_enums.h
 *
 *  Created on: Dec 25, 2020
 *      Author: coryhodge
 */

#ifndef STRUCTUREV2_MODULE_REGISTER_ENUMS_H_
#define STRUCTUREV2_MODULE_REGISTER_ENUMS_H_

//! \brief Enumerations listing the available bit field masks.
typedef enum {

    USB0   =    0x00000000,  // USB0 Clock Gating Contro
    UDMA   =    0x00000000,  // Micro-DMA Clock Gating Control
    GPIOJ  =    0x00000000,  // Port J Clock Gating Control
    GPIOH  =    0x00000000,  // Port H Clock Gating Control
    GPIOG  =    0x00000000,  // Port G Clock Gating Control
    GPIOF  =    0x00000000,  // Port F Clock Gating Control
    GPIOE  =    0x00000000,  // Port E Clock Gating Control
    GPIOD  =    0x00000000,  // Port D Clock Gating Control
    GPIOC  =    0x00000000,  // Port C Clock Gating Control
    GPIOB  =    0x00000000,  // Port B Clock Gating Control
    GPIOA  =    0x00000000   // Port A Clock Gating Control

}BF_e;



#endif /* STRUCTUREV2_MODULE_REGISTER_ENUMS_H_ */
