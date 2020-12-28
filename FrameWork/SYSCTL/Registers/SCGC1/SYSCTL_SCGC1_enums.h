/**********************************
* Bit Field Enums for : SCGC1.h 
************************************/

typedef enum { 

	UART0	=	0x00000001,	// UART0 Clock Gating Control
	UART1	=	0x00000002,	// UART1 Clock Gating Control
	UART2	=	0x00000004,	// UART2 Clock Gating Control
	SSI0	=	0x00000010,	// SSI0 Clock Gating Control
	SSI1	=	0x00000020,	// SSI1 Clock Gating Control
	QEI0	=	0x00000100,	// QEI0 Clock Gating Control
	QEI1	=	0x00000200,	// QEI1 Clock Gating Control
	I2C0	=	0x00001000,	// I2C0 Clock Gating Control
	I2C1	=	0x00004000,	// I2C1 Clock Gating Control
	TIMER0	=	0x00010000,	// Timer 0 Clock Gating Control
	TIMER1	=	0x00020000,	// Timer 1 Clock Gating Control
	TIMER2	=	0x00040000,	// Timer 2 Clock Gating Control
	TIMER3	=	0x00080000,	// Timer 3 Clock Gating Control
	COMP0	=	0x01000000,	// Analog Comparator 0 Clock Gating
	COMP1	=	0x02000000,	// Analog Comparator 1 Clock Gating
	COMP2	=	0x04000000,	// Analog Comparator 2 Clock Gating

} SCGC1_e;
//*********************************

