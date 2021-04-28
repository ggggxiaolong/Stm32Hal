#include "bsp_led.h"

void LED_GPIO_Init()
{
    //初始化时钟
    __HAL_RCC_GPIOC_CLK_ENABLE();
    //配置引脚属性
    GPIO_InitTypeDef GPIO_Init;
    GPIO_Init.Mode = GPIO_MODE_OUTPUT_PP;    // 推挽输出
    GPIO_Init.Pin = GPIO_PIN_6 | GPIO_PIN_7; //引脚6.7
    GPIO_Init.Speed = GPIO_SPEED_FREQ_LOW; //IO反转速度
    GPIO_Init.Pull = GPIO_NOPULL; //无上拉下拉
    HAL_GPIO_Init(GPIOA, &GPIO_Init);
}