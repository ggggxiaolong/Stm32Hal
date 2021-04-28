#include "bsp_key.h"

void KEY_GPIO_Init(){
    //PE3 PE4引脚
    //初始化时钟
    __HAL_RCC_GPIOE_CLK_ENABLE();
    //配置引脚属性
    GPIO_InitTypeDef GPIO_Init;
    GPIO_Init.Mode = GPIO_MODE_INPUT;    // 输入模式
    GPIO_Init.Pin = GPIO_PIN_3 | GPIO_PIN_4; //引脚3.4
    GPIO_Init.Speed = GPIO_SPEED_FREQ_LOW; //IO反转速度
    GPIO_Init.Pull = GPIO_PULLUP; //上拉
    HAL_GPIO_Init(GPIOE, &GPIO_Init);
}

uint8_t KEY_SCAN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin){
    if (HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET)
    {
        while (HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET);
        return KEY_PRESSED;
    }
    
    return KEY_UP;
}