#ifndef SENSOR_H // �����ǰ�ĺ�SENSOR_Hδ�����壬��ִ�����´���
#define SENSOR_H // ����һ����SENSOR_H����ʾ���ͷ�ļ��Ѿ������ù�

#include "main.h" // �����������ͷ�ļ�
#include "motor.h" // ���õ�����Ƶ�ͷ�ļ�
#include "stm32f1xx_hal.h" // ����STM32F1ϵ�е�Ƭ����Ӳ��������ͷ�ļ�

#define LL HAL_GPIO_ReadPin(s1_GPIO_Port, s1_Pin) // ����һ����LL����ʾ��ȡs1���ŵĵ�ƽ״̬
#define L  HAL_GPIO_ReadPin(s2_GPIO_Port, s2_Pin) // ����һ����L����ʾ��ȡs2���ŵĵ�ƽ״̬
#define R  HAL_GPIO_ReadPin(s3_GPIO_Port, s3_Pin) // ����һ����R����ʾ��ȡs3���ŵĵ�ƽ״̬
#define RR HAL_GPIO_ReadPin(s4_GPIO_Port, s4_Pin) // ����һ����RR����ʾ��ȡs4���ŵĵ�ƽ״̬


void sensor(void); // ����һ�����������ڿ��ƴ��������߼�

#endif // �����������룬��#ifndef��Ӧ
