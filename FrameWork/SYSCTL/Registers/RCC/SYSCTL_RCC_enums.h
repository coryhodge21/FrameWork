/**********************************
* Bit Field Enums for : RCC.h 
************************************/

typedef enum { 

	XTAL_S	=	6,	// Shift to the XTAL field
	SYSDIV_S	=	23,	// Main Oscillator Disable
	MOSCDIS	=	0x00000001,	// Main Oscillator Disable
	OSCSRC_30	=	0x00000030,	// LFIOSC
	OSCSRC_INT4	=	0x00000020,	// IOSC/4
	OSCSRC_INT	=	0x00000010,	// IOSC
	OSCSRC_MAIN	=	0x00000000,	// MOSC
	OSCSRC_M	=	0x00000030,	// Oscillator Source
	XTAL_25MHZ	=	0x00000680,	// 25.0 MHz (USB)
	XTAL_24MHZ	=	0x00000640,	// 24.0 MHz (USB)
	XTAL_20MHZ	=	0x00000600,	// 20.0 MHz (USB)
	XTAL_18MHZ	=	0x000005C0,	// 18.0 MHz (USB)
	XTAL_16_3MHZ	=	0x00000580,	// 16.384 MHz
	XTAL_16MHZ	=	0x00000540,	// 16 MHz
	XTAL_14_3MHZ	=	0x00000500,	// 14.31818 MHz
	XTAL_13_5MHZ	=	0x000004C0,	// 13.56 MHz
	XTAL_12_2MHZ	=	0x00000480,	// 12.288 MHz
	XTAL_12MHZ	=	0x00000440,	// 12 MHz
	XTAL_10MHZ	=	0x00000400,	// 10 MHz
	XTAL_8_19MHZ	=	0x000003C0,	// 8.192 MHz
	XTAL_8MHZ	=	0x00000380,	// 8 MHz
	XTAL_7_37MHZ	=	0x00000340,	// 7.3728 MHz
	XTAL_6_14MHZ	=	0x00000300,	// 6.144 MHz
	XTAL_6MHZ	=	0x000002C0,	// 6 MHz
	XTAL_5_12MHZ	=	0x00000280,	// 5.12 MHz
	XTAL_5MHZ	=	0x00000240,	// 5 MHz
	XTAL_4_91MHZ	=	0x00000200,	// 4.9152 MHz
	XTAL_4_09MHZ	=	0x000001C0,	// 4.096 MHz
	XTAL_4MHZ	=	0x00000180,	// 4 MHz
	XTAL_M	=	0x000007C0,	// Crystal Value
	BYPASS	=	0x00000800,	// PLL Bypass
	PWRDN	=	0x00002000,	// PLL Power Down
	PWMDIV_64	=	0x000A0000,	// PWM clock /64
	PWMDIV_32	=	0x00080000,	// PWM clock /32
	PWMDIV_16	=	0x00060000,	// PWM clock /16
	PWMDIV_8	=	0x00040000,	// PWM clock /8
	PWMDIV_4	=	0x00020000,	// PWM clock /4
	PWMDIV_2	=	0x00000000,	// PWM clock /2
	PWMDIV_M	=	0x000E0000,	// PWM Unit Clock Divisor
	USEPWMDIV	=	0x00100000,	// Enable PWM Clock Divisor
	USESYSDIV	=	0x00400000,	// Enable System Clock Divider
	SYSDIV_M	=	0x07800000,	// System Clock Divisor
	ACG	=	0x08000000,	// Auto Clock Gating

} RCC_e;
//*********************************

