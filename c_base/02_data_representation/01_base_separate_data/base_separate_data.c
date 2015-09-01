//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_separate_data.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-08-30 13:50:38
  # Last Modified:	2015-08-30 13:59:15
  # version:		v1.0
  #
  # Description:	编写一个程序，其功能为：
  #					从键盘上输入一个浮点数（小数点后有三位数），
  #					然后分别输出该数的整数部分和小数部分。
  # Input:			123.456
  # Output:			123 456
  #************************************************/

#include <stdio.h>

int main()
{
	float x;
	printf("请输入一个小数：\n");
	scanf("%f",&x);
	int a,b;
	a = (int)x;
	b = (int)(x * 1000) % 1000;
	printf("%d %d\n",a,b);

	return 0;
}
