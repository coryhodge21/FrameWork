/**********************************
* \file : PROWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PROWIRE_h_
#define _PROWIRE_h_

#include "PROWIRE_enums.h" 

typedef void(Set_fpt)(PROWIRE_e);
typedef void(Clear_fpt)(PROWIRE_e);
typedef int32_t(Set_fpt)(PROWIRE_e);
typedef void(Write_fpt)(PROWIRE_e, int32_t);

struct PROWIRE_obj;

typedef struct PROWIRE_obj PROWIRE_t;

PROWIRE_t CreateRegister_PROWIRE(void);


#endif // _PROWIRE_h_

