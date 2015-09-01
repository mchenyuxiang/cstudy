//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:	04_base_temperature.c
  #
  #	Author:		陈宇翔
  #	Email:		mchenyuxiang@126.com
  #	Create: 	2015-08-30 01:59:08
  #	Last Modified:	2015-08-30 02:02:57
  #	version:	v1.0
  #
  #	Description:	输入摄氏温度值(C)，转换为华氏温度值(F)并输出
  #     Tips:		F=C×9/5+32，温度值取浮点数类型。	
  #	Input:		
  #	Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	float c;
	scanf("%f",&c);
	printf("%f\n",c * 9 / 5 + 32);
	return 0;
}
