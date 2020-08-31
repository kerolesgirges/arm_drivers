/**************************************************/
/* Author     :keroles girgis                     */
/* Date       :21-8-2020                          */
/* version    :1.0 V                              */
/* Description:private file not allwed for user   */
/**************************************************/
#ifndef Dio_private_h
#define Dio_private_h
#include "std_types.h"
#include "MICRO_CONFIG.h"

/*(uint32*) is type casting    */
#define GPIOA_BASE_ADDRESS    *((uint32*)(0x40010800))
#define GPIOB_BASE_ADDRESS    *((uint32*)(0x40010C00))
#define GPIOC_BASE_ADDRESS    *((uint32*)(0x40011000))

/* PORTA REGISTERS HELP IN (PAGE 194 +51  ) FROM STM32F10x Register Description */
#define GPIOA_CRL  *((uint32*)(GPIOA_BASE_ADDRESS+ 0x00))
#define GPIOA_CRH  *((uint32*)(GPIOA_BASE_ADDRESS+ 0x04))
#define GPIOA_IDR  *((uint32*)(GPIOA_BASE_ADDRESS+ 0x08))
#define GPIOA_ODR  *((uint32*)(GPIOA_BASE_ADDRESS+ 0x0C))
#define GPIOA_BSRR *((uint32*)(GPIOA_BASE_ADDRESS+ 0x10))
#define GPIOA_BRR  *((uint32*)(GPIOA_BASE_ADDRESS+ 0x14))
#define GPIOA_LCKR *((uint32*)(GPIOA_BASE_ADDRESS+ 0x18))

/* PORTB REGISTERS HELP IN (PAGE 194 +51  ) FROM STM32F10x Register Description */

#define GPIOB_CRL  *((uint32*)(GPIOB_BASE_ADDRESS+ 0x00))
#define GPIOB_CRH  *((uint32*)(GPIOB_BASE_ADDRESS+ 0x04))
#define GPIOB_IDR  *((uint32*)(GPIOB_BASE_ADDRESS+ 0x08))
#define GPIOB_ODR  *((uint32*)(GPIOB_BASE_ADDRESS+ 0x0C))
#define GPIOB_BSRR *((uint32*)(GPIOB_BASE_ADDRESS+ 0x10))
#define GPIOB_BRR  *((uint32*)(GPIOB_BASE_ADDRESS+ 0x14))
#define GPIOB_LCKR *((uint32*)(GPIOB_BASE_ADDRESS+ 0x18))

/* PORTC REGISTERS HELP IN (PAGE 194 +51  ) FROM STM32F10x Register Description */

#define GPIOC_CRL  *((uint32*)(GPIOC_BASE_ADDRESS+ 0x00))
#define GPIOC_CRH  *((uint32*)(GPIOC_BASE_ADDRESS+ 0x04))
#define GPIOC_IDR  *((uint32*)(GPIOC_BASE_ADDRESS+ 0x08))
#define GPIOC_ODR  *((uint32*)(GPIOC_BASE_ADDRESS+ 0x0C))
#define GPIOC_BSRR *((uint32*)(GPIOC_BASE_ADDRESS+ 0x10))
#define GPIOC_BRR  *((uint32*)(GPIOC_BASE_ADDRESS+ 0x14))
#define GPIOC_LCKR *((uint32*)(GPIOC_BASE_ADDRESS+ 0x18))






#endif
