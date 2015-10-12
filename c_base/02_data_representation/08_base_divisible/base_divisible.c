//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_divisible.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-10-12 22:46:13
  # Last Modified:	2015-10-12 22:53:46
  # version:		v1.0
  #
  # Description:	输入一个数，判断它能否被3或者被5整除。
  #					如至少能被这两个数中的一个整除，则将此数打印出来,否则不打印	
  # Input:			
  # Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0 || a%5==0)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("不能被3或者5整除\n");
	}
	return 0;
}
