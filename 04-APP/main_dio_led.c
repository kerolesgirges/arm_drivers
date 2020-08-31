/**************************************************/
/* Author     :keroles girgis                     */
/* Date       :21-8-2020                          */
/* version    : 1.0 V                              */
/* Description: main_file  */
/**************************************************/


#include "micro_config.h"

#include "RCC_INTERFACE.h"
#include "DIO_interface.h"
#include "std_types.h"
int main(void){

    RCC_voidInitSysclock();
    // to enable rcc for GPIOA
    RCC_voidEnableClock(RCC_APB2,2);
    // to enable rcc for GPIOB
    RCC_voidEnableClock(RCC_APB2,3);
    // to enable rcc for GPIOC
    RCC_voidEnableClock(RCC_APB2,4);

    GPIO_SetPinDirection(GPIOA , PIN0,OUTPUT_10MHZ_GENERAL_PUSH_PULL);
    uint16 w = 500 ;
    while (1)
    {
    	GPIO_SetPinValue(GPIOA , PIN2 , HIGH);
		for(int i = 0 ; i < w ; i++ )
		{
			for(int j = 0 ; j < w ; j++ )
			{
				asm("NOP");
			}
		}
		GPIO_SetPinValue(GPIOA , PIN2 , LOW);
		for(int i = 0 ; i < w ; i++ )
		{
				for(int j = 0 ; j < w ; j++ )
				{
						asm("NOP");
				}
		}
 

        
    }
    
}
