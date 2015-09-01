//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_play_data.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-08-30 14:49:21
  # Last Modified:	2015-08-30 15:27:06
  # version:		v1.0
  #
  # Description:	输入3个双精度实数，分别求出它们的和、
  #					平均值、平方和以及平方和的开方，并输出所求出各个值。	
  # Input:			
  # Output:		
  #************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float sum,mean,squ,sqroot;
	sum = a + b + c;
	mean = sum / 3.0;
	squ = a * a + b * b + c * c;
	sqroot = sqrt(squ);
	printf("%f,%f,%f,%f\n",sum,mean,squ,sqroot);

	return 0;
}
