/**********************************
* Bit Field Enums for : DC1.h 
************************************/

typedef enum { 

	JTAG	=	0x00000001,	// JTAG Present
	SWD	=	0x00000002,	// SWD Present
	SWO	=	0x00000004,	// SWO Trace Port Present
	WDT0	=	0x00000008,	// Watchdog Timer 0 Present
	PLL	=	0x00000010,	// PLL Present
	TEMP	=	0x00000020,	// Temp Sensor Present
	HIB	=	0x00000040,	// Hibernation Module Present
	MPU	=	0x00000080,	// MPU Present
	ADC0SPD_1M	=	0x00000300,	// 1M samples/second
	ADC0SPD_500K	=	0x00000200,	// 500K samples/second
	ADC0SPD_250K	=	0x00000100,	// 250K samples/second
	ADC0SPD_125K	=	0x00000000,	// 125K samples/second
	ADC0SPD_M	=	0x00000300,	// Max ADC0 Speed
	ADC1SPD_1M	=	0x00000C00,	// 1M samples/second
	ADC1SPD_500K	=	0x00000800,	// 500K samples/second
	ADC1SPD_250K	=	0x00000400,	// 250K samples/second
	ADC1SPD_125K	=	0x00000000,	// 125K samples/second
	ADC1SPD_M	=	0x00000C00,	// Max ADC1 Speed
	MINSYSDIV_20	=	0x00009000,	// Specifies a 20-MHz clock with a
	MINSYSDIV_25	=	0x00007000,	// Specifies a 25-MHz clock with a
	MINSYSDIV_40	=	0x00004000,	// Specifies a 40-MHz CPU clock
	MINSYSDIV_50	=	0x00003000,	// Specifies a 50-MHz CPU clock
	MINSYSDIV_80	=	0x00002000,	// Specifies an 80-MHz CPU clock
	MINSYSDIV_M	=	0x0000F000,	// System Clock Divider
	ADC0	=	0x00010000,	// ADC Module 0 Present
	ADC1	=	0x00020000,	// ADC Module 1 Present
	PWM0	=	0x00100000,	// PWM Module 0 Present
	PWM1	=	0x00200000,	// PWM Module 1 Present
	CAN0	=	0x01000000,	// CAN Module 0 Present
	CAN1	=	0x02000000,	// CAN Module 1 Present
	WDT1	=	0x10000000,	// Watchdog Timer1 Present

} DC1_e;
//*********************************

