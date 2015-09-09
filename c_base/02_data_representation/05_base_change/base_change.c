//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_change.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-09-10 00:37:03
  # Last Modified:	2015-09-10 00:49:38
  # version:		v1.0
  #
  # Description:	写一个程序把极坐标(r,θ) (θ之单位为度)转换为直角坐标( X,Y)。转换公式是
  #					x=r.cosθy=r.sinθ
  # Input:			10 45（代表r=10  θ=45°）
  # Output:			7.071068 7.071068
  #************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	float r,th,x,y;
	scanf("%f %f",&r,&th);
	x = r * cos(th/180*PI);
	y = r * sin(th/180*PI);
	printf("%f %f\n",x ,y);
	return 0;
}

