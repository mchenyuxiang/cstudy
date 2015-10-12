//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		three_num.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-09-23 00:39:02
  # Last Modified:	2015-09-23 00:42:12
  # version:		v1.0
  #
  # Description:	
  # Input:			
  # Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	int num;
	int a,b,c;
	scanf("%d",&num);
	printf("%d\n",num%10*100+num/10%10*10+num/100);
	return 0;
}
