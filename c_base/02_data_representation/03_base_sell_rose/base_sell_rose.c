//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_sell_rose.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-08-30 14:31:33
  # Last Modified:	2015-08-30 14:41:03
  # version:		v1.0
  #
  # Description:	小慧过生日，小明（小明真忙）要买鲜花送她。
  #					每枝红玫瑰5元，满5支送1枝，满20枝送5枝。小明一共有n(n>10)元钱，最多能买到多少？
  # Input:			135	
  # Output:			33
  #************************************************/

#include <stdio.h>

int main()
{
	int money,num;
	printf("请输入小明的金额：\n");
	scanf("%d",&money);
	int num_100,num_25,num_5;
	num_100 = money / 100;
	num_25 = (money - num_100 * 100) / 25;
	num_5 = (money - num_100 * 100 - num_25 * 25) / 5;
	num = num_100 * 25 + num_25 * 6 + num_5;
	printf("%d\n",num);
}
