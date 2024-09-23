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
#include "stm32f4xx_hal.h"

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
#define BTN1_Pin GPIO_PIN_0
#define BTN1_GPIO_Port GPIOC
#define BTN1_EXTI_IRQn EXTI0_IRQn
#define BTN2_Pin GPIO_PIN_1
#define BTN2_GPIO_Port GPIOC
#define BTN2_EXTI_IRQn EXTI1_IRQn
#define BTN3_Pin GPIO_PIN_2
#define BTN3_GPIO_Port GPIOC
#define BTN3_EXTI_IRQn EXTI2_IRQn
#define EXT_INT_Pin GPIO_PIN_3
#define EXT_INT_GPIO_Port GPIOC
#define AF_IN_Pin GPIO_PIN_0
#define AF_IN_GPIO_Port GPIOA
#define ADC_IN0_Pin GPIO_PIN_1
#define ADC_IN0_GPIO_Port GPIOA
#define ADC_IN1_Pin GPIO_PIN_2
#define ADC_IN1_GPIO_Port GPIOA
#define ADC_IN2_Pin GPIO_PIN_3
#define ADC_IN2_GPIO_Port GPIOA
#define AF_OUT_Pin GPIO_PIN_4
#define AF_OUT_GPIO_Port GPIOA
#define DAC_OUT_Pin GPIO_PIN_5
#define DAC_OUT_GPIO_Port GPIOA
#define SPK_MUTE_Pin GPIO_PIN_6
#define SPK_MUTE_GPIO_Port GPIOA
#define MIC_GAIN_Pin GPIO_PIN_7
#define MIC_GAIN_GPIO_Port GPIOA
#define MIC_MUTE_Pin GPIO_PIN_4
#define MIC_MUTE_GPIO_Port GPIOC
#define TST_PIN_Pin GPIO_PIN_8
#define TST_PIN_GPIO_Port GPIOA
#define CC_GPIO0_Pin GPIO_PIN_10
#define CC_GPIO0_GPIO_Port GPIOC
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOB
#define SPI1_RST_Pin GPIO_PIN_7
#define SPI1_RST_GPIO_Port GPIOB
#define CC_GPIO2_Pin GPIO_PIN_8
#define CC_GPIO2_GPIO_Port GPIOB
#define CC_GPIO3_Pin GPIO_PIN_9
#define CC_GPIO3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
