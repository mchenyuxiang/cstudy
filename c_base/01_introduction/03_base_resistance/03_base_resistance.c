//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:	03_base_resistance.c
  #
  #	Author:		陈宇翔
  #	Email:		mchenyuxiang@126.com
  #	Create: 	2015-08-30 01:40:13
  #	Last Modified:	2015-08-30 01:44:05
  #	version:	v1.0
  #
  #	Description:	编程序，输入两个电阻R1和R2的阻值，求它们并联后的阻值R	
  #	Input:		
  #	Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	float r1,r2;
	scanf("%f %f",&r1,&r2);
	printf("%f\n",1 / (1/r1 + 1/r2));
	return 0;
}

