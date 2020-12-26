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

    USB0x   =    0x00000000,  // USB0 Clock Gating Contro
    UDMAx   =    0x00000000,  // Micro-DMA Clock Gating Control
    GPIOJx  =    0x00000000,  // Port J Clock Gating Control
    GPIOHx  =    0x00000000,  // Port H Clock Gating Control
    GPIOGx  =    0x00000000,  // Port G Clock Gating Control
    GPIOFx  =    0x00000000,  // Port F Clock Gating Control
    GPIOEx  =    0x00000000,  // Port E Clock Gating Control
    GPIODx  =    0x00000000,  // Port D Clock Gating Control
    GPIOCx  =    0x00000000,  // Port C Clock Gating Control
    GPIOBx  =    0x00000000,  // Port B Clock Gating Control
    GPIOAx  =    0x00000000   // Port A Clock Gating Control

}BF_e;



#endif /* STRUCTUREV2_MODULE_REGISTER_ENUMS_H_ */
