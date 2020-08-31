/**************************************************/
/* Author     :keroles girgis                     */                                                    
/* Date       :21-8-2020                          */
/* version    : 1.0 V                             */
/* Description: RCC_PROGRAM_file                  */
/**************************************************/

#include "std_types.h"
#include "micro_config.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidInitSysclock(void)
{
    #if     RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
		RCC_CR   = 0x00010000; /* Enable HSE with no bypass */
		RCC_CFGR = 0x00000001;
		
	#elif   RCC_CLOCK_TYPE == RCC_HSE_RC
		RCC_CR   = 0x00050000; /* Enable HSE with bypass */
		RCC_CFGR = 0x00000001;
		
	#elif   RCC_CLOCK_TYPE == RCC_HSI
		RCC_CR   = 0x00000081; /* Enable HSI + Trimming = 0 */
		RCC_CFGR = 0x00000000;
	
	#elif   RCC_CLOCK_TYPE == RCC_PLL
		#if   RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
		
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
	
		#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE
		
		#endif
	
	#else
		#error("You chosed Wrong Clock type")
	#endif
}

void RCC_voidEnableClock(uint8 Copy_uint8BusId,uint8 Copy_uint8PerId ){

  if (Copy_uint8PerId <= 31){
      
      switch (Copy_uint8BusId)
      {
      case RCC_AHB  : SET_BIT (RCC_AHBENR ,Copy_uint8PerId);
          break;
      case RCC_APB1  : SET_BIT (RCC_APB1ENR ,Copy_uint8PerId);
          break;
      case RCC_APB2  : SET_BIT (RCC_APB2ENR ,Copy_uint8PerId);
          break;
      default:/*   return error */
          break;
      }
  }

}
void RCC_voidDisableClock(uint8 Copy_uint8busid,uint8 Copy_uint8PerId ){

  if (Copy_uint8PerId <= 31){
      switch (Copy_uint8busid)
      {
      case RCC_AHB  : CLEAR_BIT (RCC_AHBENR ,Copy_uint8PerId);
          break;
      case RCC_APB1  : CLEAR_BIT (RCC_APB1ENR ,Copy_uint8PerId);
          break;
      case RCC_APB2  : CLEAR_BIT (RCC_APB2ENR ,Copy_uint8PerId);
          break;
      default:/*   return error */
          break;
      }
  }
  else
  {
      /* code */
  }
  

}
