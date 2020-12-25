/**********************************
* Bit Field Enums for : DC5.h 
************************************/

typedef enum { 

	PWM0	=	0x00000001,	// PWM0 Pin Present
	PWM1	=	0x00000002,	// PWM1 Pin Present
	PWM2	=	0x00000004,	// PWM2 Pin Present
	PWM3	=	0x00000008,	// PWM3 Pin Present
	PWM4	=	0x00000010,	// PWM4 Pin Present
	PWM5	=	0x00000020,	// PWM5 Pin Present
	PWM6	=	0x00000040,	// PWM6 Pin Present
	PWM7	=	0x00000080,	// PWM7 Pin Present
	PWMESYNC	=	0x00100000,	// PWM Extended SYNC Active
	PWMEFLT	=	0x00200000,	// PWM Extended Fault Active
	PWMFAULT0	=	0x01000000,	// PWM Fault 0 Pin Present
	PWMFAULT1	=	0x02000000,	// PWM Fault 1 Pin Present
	PWMFAULT2	=	0x04000000,	// PWM Fault 2 Pin Present
	PWMFAULT3	=	0x08000000,	// PWM Fault 3 Pin Present

} DC5_e;
//*********************************

