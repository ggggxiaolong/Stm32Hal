#ifndef __BSP_LED_H__
#define __BSP_LED_H__

#include "main.h"

// GPIOA 6,7引脚

//初始化LED灯对应的GPIO引脚
void LED_GPIO_Init(void);

//打开LED1
#define LED1_ON do{HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET);}while (0);

//关闭LED1
#define LED1_OFF do{HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);}while (0);

//反转LED1
#define LED1_TOGGLE do{HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);}while (0);

//打开LED2
#define LED2_ON do{HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);}while (0);

//关闭LED2
#define LED2_OFF do{HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);}while (0);

//反转LED2
#define LED2_TOGGLE do{HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_7);}while (0);

#endif // !__BSP_LED_H__
