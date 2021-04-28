#ifndef __BSP_KEY_H__
#define __BSP_KEY_H__

//PE3 PE4引脚
#define KEY_PRESSED 1
#define KEY_UP  0

#define KEY1_PORT GPIOE
#define KEY1_PIN GPIO_PIN_3
#define KEY2_PORT GPIOE
#define KEY2_PIN GPIO_PIN_4

#include "main.h"

void KEY_GPIO_Init(void);

uint8_t KEY_SCAN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif // !__BSP_KEY_H__
