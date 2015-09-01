//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:	base_difference.c
  #
  #	Author:		陈宇翔
  #	Email:		mchenyuxiang@126.com
  #	Create: 	2015-08-30 11:53:18
  #	Last Modified:	2015-08-30 11:57:40
  #	version:	v1.0
  #
  #	Description:	给定两个正整数，求出两数的正差值并输出。
  #	Input:		7 10
  #	Output:		3
  #************************************************/

#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a - b > 0)
	{
		printf("%d\n",a-b);
	}
	else
	{
		printf("%d\n",b-a);
	}
	return 0;
}
