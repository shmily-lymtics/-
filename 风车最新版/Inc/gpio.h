/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for 
  *                      the gpio  
  ******************************************************************************
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "main.h"

/***************���ź�***************/
#define IST_INT_Pin GPIO_PIN_3
#define IST_INT_GPIO_Port GPIOE
#define IST_RST_Pin GPIO_PIN_2
#define IST_RST_GPIO_Port GPIOE
#define LASER_Pin GPIO_PIN_13
#define LASER_GPIO_Port GPIOG
#if	BoardOld
	#define KEY_Pin GPIO_PIN_10
	#define KEY_GPIO_Port GPIOD
	#define LED_GREEN_Pin GPIO_PIN_14
	#define LED_GREEN_GPIO_Port GPIOF
	#define LED_RED_Pin  GPIO_PIN_7
	#define LED_RED_GPIO_Port  GPIOE
	#define Buzzer_PIN  GPIO_PIN_4
	#define Buzzer_GPIO_Port GPIOB
#endif
#if BoardNew
	#define KEY_Pin GPIO_PIN_2
	#define KEY_GPIO_Port GPIOB
	#define LED_GREEN_Pin GPIO_PIN_14
	#define LED_GREEN_GPIO_Port GPIOF
	#define LED_RED_Pin GPIO_PIN_11
	#define LED_RED_GPIO_Port GPIOE
	#define Buzzer_PIN  GPIO_PIN_6
	#define Buzzer_GPIO_Port GPIOH
	//led
	#define LED1_Pin GPIO_PIN_1
	#define LED2_Pin GPIO_PIN_2
	#define LED3_Pin GPIO_PIN_3
	#define LED4_Pin GPIO_PIN_4
	#define LED5_Pin GPIO_PIN_5
	#define LED6_Pin GPIO_PIN_6
	#define LED7_Pin GPIO_PIN_7
	#define LED8_Pin GPIO_PIN_8
#endif	 
	
//�����	
#define gate2_Pin GPIO_PIN_7
#define gate2_GPIO_Port GPIOI
#define gate2_EXTI_IRQn EXTI9_5_IRQn
#define gate1_Pin GPIO_PIN_2
#define gate1_GPIO_Port GPIOI
#define gate1_EXTI_IRQn EXTI2_IRQn
	 
void MX_GPIO_Init(void);


#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
