/**********************************
* Bit Field Enums for : RCGC0.h 
************************************/

typedef enum { 

	WDT0	=	0x00000008,	// WDT0 Clock Gating Control
	HIB	=	0x00000040,	// HIB Clock Gating Control
	ADC0SPD_1M	=	0x00000300,	// 1M samples/second
	ADC0SPD_500K	=	0x00000200,	// 500K samples/second
	ADC0SPD_250K	=	0x00000100,	// 250K samples/second
	ADC0SPD_125K	=	0x00000000,	// 125K samples/second
	ADC0SPD_M	=	0x00000300,	// ADC0 Sample Speed
	ADC1SPD_1M	=	0x00000C00,	// 1M samples/second
	ADC1SPD_500K	=	0x00000800,	// 500K samples/second
	ADC1SPD_250K	=	0x00000400,	// 250K samples/second
	ADC1SPD_125K	=	0x00000000,	// 125K samples/second
	ADC1SPD_M	=	0x00000C00,	// ADC1 Sample Speed
	ADC0	=	0x00010000,	// ADC0 Clock Gating Control
	ADC1	=	0x00020000,	// ADC1 Clock Gating Control
	PWM0	=	0x00100000,	// PWM Clock Gating Control
	CAN0	=	0x01000000,	// CAN0 Clock Gating Control
	CAN1	=	0x02000000,	// CAN1 Clock Gating Control
	WDT1	=	0x10000000,	// WDT1 Clock Gating Control

} RCGC0_e;
//*********************************

