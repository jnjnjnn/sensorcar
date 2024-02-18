#ifndef SENSOR_H // 如果当前的宏SENSOR_H未被定义，则执行以下代码
#define SENSOR_H // 定义一个宏SENSOR_H，表示这个头文件已经被引用过

#include "main.h" // 引用主程序的头文件
#include "motor.h" // 引用电机控制的头文件
#include "stm32f1xx_hal.h" // 引用STM32F1系列单片机的硬件抽象层的头文件

#define LL HAL_GPIO_ReadPin(s1_GPIO_Port, s1_Pin) // 定义一个宏LL，表示读取s1引脚的电平状态
#define L  HAL_GPIO_ReadPin(s2_GPIO_Port, s2_Pin) // 定义一个宏L，表示读取s2引脚的电平状态
#define R  HAL_GPIO_ReadPin(s3_GPIO_Port, s3_Pin) // 定义一个宏R，表示读取s3引脚的电平状态
#define RR HAL_GPIO_ReadPin(s4_GPIO_Port, s4_Pin) // 定义一个宏RR，表示读取s4引脚的电平状态


void sensor(void); // 声明一个函数，用于控制传感器的逻辑

#endif // 结束条件编译，与#ifndef对应
