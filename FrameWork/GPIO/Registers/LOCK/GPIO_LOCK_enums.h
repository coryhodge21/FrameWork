/**********************************
* Bit Field Enums for : LOCK.h 
************************************/

typedef enum { 

	KEY	=	0x4C4F434B,	// Unlocks the GPIO_CR register
	LOCKED	=	0x00000001,	// The GPIOCR register is locked
	UNLOCKED	=	0x00000000,	// The GPIOCR register is unlocked
	M	=	0xFFFFFFFF,	// GPIO Lock

} LOCK_e;
//*********************************

