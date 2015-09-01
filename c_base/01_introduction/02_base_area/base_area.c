//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:	base_area.c
  #
  #	Author:		陈宇翔
  #	Email:		mchenyuxiang@126.com
  #	Create: 	2015-08-30 01:29:25
  #	Last Modified:	2015-08-30 01:33:04
  #	version:	v1.0
  #
  #	Description:	编程序，输入长方形的两边长a和b，输出长方形的周长和面积
  #	Input:		
  #	Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	int a,b;
	int area,permeter;
	scanf("%d %d",&a,&b);
	area = a * b;
	permeter = 2 * (a + b);
	printf("area = %d,permeter = %d\n",area,permeter);
	return 0;
}
