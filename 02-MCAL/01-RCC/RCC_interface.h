/**************************************************/
/* Author     :keroles girgis                     */                                                    
/* Date       :21-8-2020                          */
/* version    : 1.0 V                             */
/* Description: RCC_interface_file                  */
/**************************************************/

#ifndef _RCC_interface_H
#define _RCC_interface_H

#include "std_types.h"
#define RCC_AHB       0 
#define RCC_APB1      1
#define RCC_APB2      2


void RCC_voidInitSysclock(void);
void RCC_voidEnableClock(uint8 Copy_uint8BusId,uint8 Copy_uint8PerId );
void RCC_voidDisableClock(uint8 Copy_uint8BusId,uint8 Copy_uint8PerId );

#endif
