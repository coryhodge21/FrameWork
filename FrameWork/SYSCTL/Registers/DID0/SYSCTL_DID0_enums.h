/**********************************
* Bit Field Enums for : DID0.h 
************************************/

typedef enum { 

	CLASS_SNOWFLAKE	=	0x000A0000,	// Tiva(TM) C Series TM4C129-class
	CLASS_BLIZZARD	=	0x00050000,	// Tiva(TM) C Series TM4C123-class
	MIN_2	=	0x00000002,	// Second metal layer change
	MIN_1	=	0x00000001,	// First metal layer change
	MIN_0	=	0x00000000,	// Initial device, or a major
	MIN_M	=	0x000000FF,	// Minor Revision
	MAJ_REVC	=	0x00000200,	// Revision C (second base layer
	MAJ_REVB	=	0x00000100,	// Revision B (first base layer
	MAJ_REVA	=	0x00000000,	// Revision A (initial device)
	MAJ_M	=	0x0000FF00,	// Major Revision
	CLASS_TM4C129	=	0x000A0000,	// Tiva(TM) TM4C129-class
	CLASS_TM4C123	=	0x00050000,	// Tiva TM4C123x and TM4E123x
	CLASS_M	=	0x00FF0000,	// Device Class
	VER_1	=	0x10000000,	// Second version of the DID0
	VER_M	=	0x70000000,	// DID0 Version

} DID0_e;
//*********************************

