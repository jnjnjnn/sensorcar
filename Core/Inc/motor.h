#ifndef MOTOR_H // 如果当前的宏MOTOR_H未被定义，则执行以下代码
#define MOTOR_H // 定义一个宏MOTOR_H，表示这个头文件已经被引用过

#include "main.h" // 引用主程序的头文件
#include "stm32f1xx_hal.h" // 引用STM32F1系列单片机的硬件抽象层的头文件，提供一些底层的驱动函数

void go(void); // 声明一个函数，用于控制电机向前运动
void right(void); // 声明一个函数，用于控制电机向后运动
void left(void); // 声明一个函数，用于控制电机向左转向
void stop(void); // 声明一个函数，用于控制电机停止运动

#endif // 结束条件编译，与#ifndef对应
