/**********************************
* Bit Field Enums for : DC2.h 
************************************/

typedef enum { 

	UART0	=	0x00000001,	// UART Module 0 Present
	UART1	=	0x00000002,	// UART Module 1 Present
	UART2	=	0x00000004,	// UART Module 2 Present
	SSI0	=	0x00000010,	// SSI Module 0 Present
	SSI1	=	0x00000020,	// SSI Module 1 Present
	QEI0	=	0x00000100,	// QEI Module 0 Present
	QEI1	=	0x00000200,	// QEI Module 1 Present
	I2C0	=	0x00001000,	// I2C Module 0 Present
	I2C0HS	=	0x00002000,	// I2C Module 0 Speed
	I2C1	=	0x00004000,	// I2C Module 1 Present
	I2C1HS	=	0x00008000,	// I2C Module 1 Speed
	TIMER0	=	0x00010000,	// Timer Module 0 Present
	TIMER1	=	0x00020000,	// Timer Module 1 Present
	TIMER2	=	0x00040000,	// Timer Module 2 Present
	TIMER3	=	0x00080000,	// Timer Module 3 Present
	COMP0	=	0x01000000,	// Analog Comparator 0 Present
	COMP1	=	0x02000000,	// Analog Comparator 1 Present
	COMP2	=	0x04000000,	// Analog Comparator 2 Present
	I2S0	=	0x10000000,	// I2S Module 0 Present
	EPI0	=	0x40000000,	// EPI Module 0 Present

} DC2_e;
//*********************************

