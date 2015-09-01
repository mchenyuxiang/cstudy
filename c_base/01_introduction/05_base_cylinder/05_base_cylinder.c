//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:	05_base_cylinder.c
  #
  #	Author:		陈宇翔
  #	Email:		mchenyuxiang@126.com
  #	Create: 	2015-08-30 02:06:13
  #	Last Modified:	2015-08-30 02:11:00
  #	version:	v1.0
  #
  #	Description:	编程序，输入圆柱体的半径r和高h，输出圆柱体的表面积s
  #     Tips:		π值直接写3.1415926	
  #	Input:		3.5  9
  #	Output:		Area = 274.889343
  #************************************************/

#include <stdio.h>

#define PI 3.1415926

int main()
{
	float r,h,s;
	scanf("%f %f",&r,&h);
	printf("Area = %f\n",2 * PI * r * r + 2 * PI * r * h);
	return 0;
}

