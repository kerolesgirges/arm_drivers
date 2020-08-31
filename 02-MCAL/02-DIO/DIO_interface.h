/**************************************************/
/* Author     :keroles girgis                     */
/* Date       :21-8-2020                          */
/* version    :1.0 V                              */
/* Description:shortcuts that user or programes would use    */
/**************************************************/
#ifndef DIO_INTERFACE_h
#define DIO_INTERFACE_h

#define GPIOA   0
#define GPIOB   0
#define GPIOC   0
/*DEFINES PINS FOR MORE HELP IN PROJECT */

#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7
#define PIN8    8
#define PIN9    9
#define PIN10    10
#define PIN11    11
#define PIN12    12
#define PIN13    13
#define PIN14    14
#define PIN15    15
/*INPUTS AND OUTPUT MODES FOR HELP  page(161) in file ( STM32F10x Register Description) */
// input modes 
#define INPUT_ANALOG       0b0000
#define INPUT_FLOATING     0b0100
#define INPUT_PULL_UP_DOWN 0b1000
// outputs modes for defrant freqances
/*for Maximum output speed 10 MHz*/
#define OUTPUT_10MHZ_GENERAL_PUSH_PULL  0b0001
#define OUTPUT_10MHZ_GENERAL_OPEN_DRAIN 0b0101
#define OUTPUT_10MHZ_AF_PUSH_PULL       0b1001
#define OUTPUT_10MHZ_AF_OPEN_DRAIN      0b1101
/*for Maximum output speed 2 MHz*/
#define OUTPUT_2MHZ_GENERAL_PUSH_PULL   0b0010
#define OUTPUT_2MHZ_GENERAL_OPEN_DRAIN  0b0110
#define OUTPUT_2MHZ_AF_PUSH_PULL        0b1010
#define OUTPUT_2MHZ_AF_OPEN_DRAIN       0b1110
/*for Maximum output speed 50 MHz*/
#define OUTPUT_50MHZ_GENERAL_PUSH_PULL  0b0011
#define OUTPUT_50MHZ_GENERAL_OPEN_DRAIN 0b0111
#define OUTPUT_50MHZ_AF_PUSH_PULL       0b1011
#define OUTPUT_50MHZ_AF_OPEN_DRAIN      0b1111


// function for set pin direction 
void  GPIO_SetPinDirection (uint8 Port_name ,uint8 pin_num, uint8 pin_mode );
// function for set pin value
void  GPIO_SetPinValue     (uint8 Port_name ,uint8 pin_num, uint8 pin_Value );
// get satues of pin 
uint8 GPIO_GetPinValue     (uint8 Port_name ,uint8 pin_num);




#endif
