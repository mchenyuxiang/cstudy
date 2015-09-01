//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_three_max.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-08-30 12:12:16
  # Last Modified:	2015-08-30 12:25:10
  # version:		v1.0
  #
  # Description:	三数最大值	
  # Input:			50 10 100
  # Output:			100
  #************************************************/

#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("请输入三个整数：\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	if(c > max)
	{
		max = c;
	}
	printf("最大数为：%d\n",max);
	return 0;
}
