#include "motor.h"


void go()
{
    HAL_GPIO_WritePin(m1_GPIO_Port, m1_Pin, GPIO_PIN_SET);   // 1
    HAL_GPIO_WritePin(m2_GPIO_Port, m2_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m3_GPIO_Port, m3_Pin, GPIO_PIN_SET);   // 1
    HAL_GPIO_WritePin(m4_GPIO_Port, m4_Pin, GPIO_PIN_RESET); // 0
}
void stop()
{
    HAL_GPIO_WritePin(m1_GPIO_Port, m1_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m2_GPIO_Port, m2_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m3_GPIO_Port, m3_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m4_GPIO_Port, m4_Pin, GPIO_PIN_RESET); // 0
}

void left()
{
    HAL_GPIO_WritePin(m1_GPIO_Port, m1_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m2_GPIO_Port, m2_Pin, GPIO_PIN_SET);   // 1
    HAL_GPIO_WritePin(m3_GPIO_Port, m3_Pin, GPIO_PIN_SET);   // 1
    HAL_GPIO_WritePin(m4_GPIO_Port, m4_Pin, GPIO_PIN_RESET); // 0
}
void right()
{
    HAL_GPIO_WritePin(m1_GPIO_Port, m1_Pin, GPIO_PIN_SET);   // 1
    HAL_GPIO_WritePin(m2_GPIO_Port, m2_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m3_GPIO_Port, m3_Pin, GPIO_PIN_RESET); // 0
    HAL_GPIO_WritePin(m4_GPIO_Port, m4_Pin, GPIO_PIN_SET);   // 1
}
