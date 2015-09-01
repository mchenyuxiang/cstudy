//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_wage.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-08-30 12:29:56
  # Last Modified:	2015-08-30 12:35:08
  # version:		v1.0
  #
  # Description:	某公司工资按周发放，标准是每小时制20元，
  #					若员工周工作时间超过40小时，超出部分每小时30元。
  #					编程序输入一名员工一周的工作小时数，输出他的周工资
  # Input:			32
  # Output:			640
  #************************************************/

#include <stdio.h>

int main()
{
	int hour,sum;
	scanf("%d",&hour);
	if(hour <= 40)
	{
		sum = hour * 20;
	}
	else
	{
		sum = 20 * 40 + (hour - 40) * 30;
	}
	printf("%d\n",sum);
	return 0;
}
