/**********************************
* Bit Field Enums for : DC3.h 
************************************/

typedef enum { 

	PWM0	=	0x00000001,	// PWM0 Pin Present
	PWM1	=	0x00000002,	// PWM1 Pin Present
	PWM2	=	0x00000004,	// PWM2 Pin Present
	PWM3	=	0x00000008,	// PWM3 Pin Present
	PWM4	=	0x00000010,	// PWM4 Pin Present
	PWM5	=	0x00000020,	// PWM5 Pin Present
	C0MINUS	=	0x00000040,	// C0- Pin Present
	C0PLUS	=	0x00000080,	// C0+ Pin Present
	C0O	=	0x00000100,	// C0o Pin Present
	C1MINUS	=	0x00000200,	// C1- Pin Present
	C1PLUS	=	0x00000400,	// C1+ Pin Present
	C1O	=	0x00000800,	// C1o Pin Present
	C2MINUS	=	0x00001000,	// C2- Pin Present
	C2PLUS	=	0x00002000,	// C2+ Pin Present
	C2O	=	0x00004000,	// C2o Pin Present
	PWMFAULT	=	0x00008000,	// PWM Fault Pin Present
	ADC0AIN0	=	0x00010000,	// ADC Module 0 AIN0 Pin Present
	ADC0AIN1	=	0x00020000,	// ADC Module 0 AIN1 Pin Present
	ADC0AIN2	=	0x00040000,	// ADC Module 0 AIN2 Pin Present
	ADC0AIN3	=	0x00080000,	// ADC Module 0 AIN3 Pin Present
	ADC0AIN4	=	0x00100000,	// ADC Module 0 AIN4 Pin Present
	ADC0AIN5	=	0x00200000,	// ADC Module 0 AIN5 Pin Present
	ADC0AIN6	=	0x00400000,	// ADC Module 0 AIN6 Pin Present
	ADC0AIN7	=	0x00800000,	// ADC Module 0 AIN7 Pin Present
	CCP0	=	0x01000000,	// T0CCP0 Pin Present
	CCP1	=	0x02000000,	// T0CCP1 Pin Present
	CCP2	=	0x04000000,	// T1CCP0 Pin Present
	CCP3	=	0x08000000,	// T1CCP1 Pin Present
	CCP4	=	0x10000000,	// T2CCP0 Pin Present
	CCP5	=	0x20000000,	// T2CCP1 Pin Present
	32KHZ	=	0x80000000,	// 32KHz Input Clock Available

} DC3_e;
//*********************************

