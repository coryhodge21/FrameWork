/**********************************
* \file : MEMTIM0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MEMTIM0_h_
#define _MEMTIM0_h_

#include "MEMTIM0_enums.h" 

typedef void(Set_fpt)(MEMTIM0_e);
typedef void(Clear_fpt)(MEMTIM0_e);
typedef int32_t(Set_fpt)(MEMTIM0_e);
typedef void(Write_fpt)(MEMTIM0_e, int32_t);

struct MEMTIM0_obj;

typedef struct MEMTIM0_obj MEMTIM0_t;

MEMTIM0_t CreateRegister_MEMTIM0(void);


#endif // _MEMTIM0_h_

