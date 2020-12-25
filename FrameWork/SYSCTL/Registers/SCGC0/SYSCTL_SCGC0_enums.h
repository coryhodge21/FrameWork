/**********************************
* Bit Field Enums for : SCGC0.h 
************************************/

typedef enum { 

	WDT0	=	0x00000008,	// WDT0 Clock Gating Control
	HIB	=	0x00000040,	// HIB Clock Gating Control
	ADCSPD_M	=	0x00000F00,	// ADC Sample Speed
	ADC0	=	0x00010000,	// ADC0 Clock Gating Control
	ADC1	=	0x00020000,	// ADC1 Clock Gating Control
	PWM0	=	0x00100000,	// PWM Clock Gating Control
	CAN0	=	0x01000000,	// CAN0 Clock Gating Control
	CAN1	=	0x02000000,	// CAN1 Clock Gating Control
	WDT1	=	0x10000000,	// WDT1 Clock Gating Control

} SCGC0_e;
//*********************************

