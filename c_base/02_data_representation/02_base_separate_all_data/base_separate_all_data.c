//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_separate_all_data.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-08-30 14:09:22
  # Last Modified:	2015-08-30 14:21:32
  # version:		v1.0
  #
  # Description:	写一个程序，输入x(三位数)，输出其个、十、百位数，用空格隔开	
  # Input:			768
  # Output:			8 6 7
  #************************************************/

#include <stdio.h>

int main()
{
	int num,a,b,c;
	printf("请输入一个三位数:\n");
	scanf("%d",&num);
	a = num / 100;
	c = num % 10;
	b = num / 10 % 10;
	printf("%d %d %d\n",c,b,a);

	return 0;
}
