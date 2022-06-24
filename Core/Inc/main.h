/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GA0_Pin GPIO_PIN_0
#define GA0_GPIO_Port GPIOC
#define GA1_Pin GPIO_PIN_1
#define GA1_GPIO_Port GPIOC
#define GA2_Pin GPIO_PIN_2
#define GA2_GPIO_Port GPIOC
#define GA3_Pin GPIO_PIN_3
#define GA3_GPIO_Port GPIOC
#define ADC_5V_Pin GPIO_PIN_0
#define ADC_5V_GPIO_Port GPIOA
#define ADC_2_5V_Pin GPIO_PIN_1
#define ADC_2_5V_GPIO_Port GPIOA
#define ADC_3_3V_Pin GPIO_PIN_4
#define ADC_3_3V_GPIO_Port GPIOA
#define ADC_1_8V_Pin GPIO_PIN_5
#define ADC_1_8V_GPIO_Port GPIOA
#define ADC_12V_Pin GPIO_PIN_6
#define ADC_12V_GPIO_Port GPIOA
#define GA4_Pin GPIO_PIN_4
#define GA4_GPIO_Port GPIOC
#define GAP_Pin GPIO_PIN_5
#define GAP_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_12
#define LED_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
