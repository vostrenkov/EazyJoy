/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
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
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define LED1_Pin 					GPIO_PIN_0
#define LED1_GPIO_Port 		GPIOB
#define LED2_Pin 					GPIO_PIN_1
#define LED2_GPIO_Port 		GPIOB
#define LED3_Pin 					GPIO_PIN_10
#define LED3_GPIO_Port 		GPIOB
#define LED4_Pin 					GPIO_PIN_11
#define LED4_GPIO_Port 		GPIOB
#define BTN1_Pin 					GPIO_PIN_12
#define BTN1_GPIO_Port 		GPIOB
#define BTN2_Pin 					GPIO_PIN_13
#define BTN2_GPIO_Port 		GPIOB
#define BTN3_Pin 					GPIO_PIN_14
#define BTN3_GPIO_Port 		GPIOB
#define BTN4_Pin 					GPIO_PIN_15
#define BTN4_GPIO_Port 		GPIOB
#define BTN5_Pin				 	GPIO_PIN_8
#define BTN5_GPIO_Port 		GPIOA
#define BTN6_Pin 					GPIO_PIN_9
#define BTN6_GPIO_Port 		GPIOA
#define BTN7_Pin 					GPIO_PIN_10
#define BTN7_GPIO_Port 		GPIOA
#define BTN8_Pin 					GPIO_PIN_3
#define BTN8_GPIO_Port 		GPIOB
#define BTN9_Pin 					GPIO_PIN_4
#define BTN9_GPIO_Port 		GPIOB
#define BTN10_Pin 				GPIO_PIN_5
#define BTN10_GPIO_Port 	GPIOB
#define BTN11_Pin 				GPIO_PIN_6
#define BTN11_GPIO_Port 	GPIOB
#define BTN12_Pin 				GPIO_PIN_7
#define BTN12_GPIO_Port 	GPIOB


/* USER CODE BEGIN Private defines */
#define THROTTLE_ENABLED				0					// 1 for enabled, 0 for disabled
#define RUDDER_ENABLED					0					// 1 for enabled, 0 for disabled
#define JOYSTICK_AXIS_NUM				3
#define SECONDARY_AXIS_NUM			0

#define BUTTONS_NUM							0
#define LEDS_NUM								0

/* END OF USER CODE AREA */



/* DO NOT CHANGE CODE BELOW IF NOT SURE WHAT ARE YOU DOING */

#define FILTER_WINDOW_SIZE			10

#define ADC_CHANNELS_NUM				8


#define AXIS_NUM								((THROTTLE_ENABLED) + (JOYSTICK_AXIS_NUM) \
																+ (SECONDARY_AXIS_NUM) + (RUDDER_ENABLED))
																
#if (JOYSTICK_AXIS_NUM > 0)
	#define JOYSTICK_AXIS_ENABLED  	1
#else
	#define JOYSTICK_AXIS_ENABLED  	0
#endif

#if (SECONDARY_AXIS_NUM > 0)
	#define SECONDARY_AXIS_ENABLED  	1
#else
	#define SECONDARY_AXIS_ENABLED  	0
#endif

#if (BUTTONS_NUM > 0)
	#define BUTTONS_ENABLED  	1
#else
	#define BUTTONS_ENABLED  	0
#endif

#define DEVICE_ID1					0x1FFFF7E8
#define DEVICE_ID2					0x1FFFF7EA
#define DEVICE_ID3					0x1FFFF7EC
#define DEVICE_ID4					0x1FFFF7F0


/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
