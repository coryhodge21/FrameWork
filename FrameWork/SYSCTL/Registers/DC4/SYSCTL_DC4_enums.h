/**********************************
* Bit Field Enums for : DC4.h 
************************************/

typedef enum { 

	GPIOA	=	0x00000001,	// GPIO Port A Present
	GPIOB	=	0x00000002,	// GPIO Port B Present
	GPIOC	=	0x00000004,	// GPIO Port C Present
	GPIOD	=	0x00000008,	// GPIO Port D Present
	GPIOE	=	0x00000010,	// GPIO Port E Present
	GPIOF	=	0x00000020,	// GPIO Port F Present
	GPIOG	=	0x00000040,	// GPIO Port G Present
	GPIOH	=	0x00000080,	// GPIO Port H Present
	GPIOJ	=	0x00000100,	// GPIO Port J Present
	ROM	=	0x00001000,	// Internal Code ROM Present
	UDMA	=	0x00002000,	// Micro-DMA Module Present
	CCP6	=	0x00004000,	// T3CCP0 Pin Present
	CCP7	=	0x00008000,	// T3CCP1 Pin Present
	PICAL	=	0x00040000,	// PIOSC Calibrate
	E1588	=	0x01000000,	// 1588 Capable
	EMAC0	=	0x10000000,	// Ethernet MAC Layer 0 Present
	EPHY0	=	0x40000000,	// Ethernet PHY Layer 0 Present

} DC4_e;
//*********************************

