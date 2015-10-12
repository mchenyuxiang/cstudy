//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_data_play.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-10-12 23:01:27
  # Last Modified:	2015-10-13 00:18:41
  # version:		v1.0
  #
  # Description:	编程输入整数a和b，若两数之和大于100，
  #					则输出两数和百位以上的数字，否则输出两数之和。	
  # Input:			
  # Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum = a + b;
	if(sum > 100)
	{
		printf("%d\n",sum/100);
	}
	else
	{
		printf("%d\n",sum);
	}
	return 0;
}

