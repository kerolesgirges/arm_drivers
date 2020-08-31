/**************************************************/
// /* Author     :keroles girgis                     */
/* Date       :21-8-2020                          */
/* version    : 1.0 V                             */
/* Description: Dio_program file                  */
/**************************************************/

#include "std_types.h"
#include "MICRO_CONFIG.h"


#include "Dio_private.h"
#include "DIO_interface.h"
#include "DIO_CONFIG.h"

// function for set pin direction 
void  GPIO_SetPinDirection (uint8 Port_name ,uint8 pin_num, uint8 pin_mode   )
{
    switch (Port_name)
    {
    case GPIOA:
        if(pin_num <= 7)
        {
            GPIOA_CRL &=~ ( (0b1111) << (pin_num*4) );
            GPIOA_CRL |=  ( (pin_mode) << (pin_num*4));
        }

        else if(pin_num <= 15)
        {
            pin_num -=8;
            GPIOA_CRH &=~ ( (0b1111) << (pin_num*4) );
            GPIOA_CRH |=  ( (pin_mode) << (pin_num*4));
        }
        
        break;


    
    case GPIOB:
        if(pin_num <= 7)
        {
            GPIOB_CRL &=~ ( (0b1111) << (pin_num*4) );
            GPIOB_CRL |=  ( (pin_mode) << (pin_num*4));
        }

        else if(pin_num <= 15)
        {
            pin_num -=8;
            GPIOB_CRH &=~ ( (0b1111) << (pin_num*4) );
            GPIOB_CRH |=  ( (pin_mode) << (pin_num*4));
        }
        
        break;

    
    case GPIOC:
        if(pin_num <= 7)
        {
            GPIOC_CRL &=~ ( (0b1111) << (pin_num*4) );
            GPIOC_CRL |=  ( (pin_mode) << (pin_num*4));
        }



        else if(pin_num <= 15)
        {
            pin_num -=8;
            GPIOC_CRH &=~ ( (0b1111) << (pin_num*4) );
            GPIOC_CRH |=  ( (pin_mode) << (pin_num*4));
        }
        
        break;

    }
}
// function for set pin value
    void  GPIO_SetPinValue     (uint8 Port_name ,uint8 pin_num, uint8 pin_Value   )

    {
        switch (Port_name)
        {
        case GPIOA:
            if (pin_Value == HIGH)
        {
            SET_BIT ( GPIOA_ODR ,pin_num );
        }
        else if (pin_Value == LOW)
        {
            CLEAR_BIT (GPIOA_ODR ,pin_num);
        }
         break;
        
         case GPIOB:
            if (pin_Value == HIGH)
        {
            SET_BIT ( GPIOB_ODR ,pin_num );
        }
        else if (pin_value == LOW)
        {
            CLEAR_BIT (GPIOB_ODR ,pin_num);
        }
         break;
         case GPIOC:
            if (pin_value == HIGH)
        {
            SET_BIT ( GPIOC_ODR ,pin_num );
        }
        else if (pin_value == LOW)
        {
            CLEAR_BIT (GPIOC_ODR ,pin_num);
        }
            break;
        
        default : break;

    }
}

// get satues of pin 
uint8 GPIO_GetPinValue     (uint8 Port_name ,uint8 pin_num)
{
        uint8 uint8_result = 0 ;

        switch (Port_name)
        {
        case GPIOA :
        	uint8_result= BIT_IS_SET( GPIOA_IDR, pin_num);
            break;
        case GPIOB :
                uint8_result= BIT_IS_SET( GPIOB_IDR, pin_num);
            break;
        case GPIOC :
        	uint8_result= BIT_IS_SET( GPIOC_IDR, pin_num);
            break;    
        default:
            break;
        }
        return uint8_result ;
        
        
}


