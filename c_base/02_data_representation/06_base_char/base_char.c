//C file
/* ************************************************
  #
  #	Copyright (c)2015,湖南大学信息科学与工程学院
  #	Filename:		base_char.c
  #
  #	Author:			陈宇翔
  #	Email:			mchenyuxiang@126.com
  #	Create:			2015-09-10 01:10:24
  # Last Modified:	2015-09-10 01:12:17
  # version:		v1.0
  #
  # Description:	编写一个程序，从键盘上输入一个小写字母，显示这个小写字母及它所对应的大写字母以及它们的ASCII码值	
  # Input:			
  # Output:		
  #************************************************/

#include <stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	printf("%c %d\n",ch,ch);
	printf("%c %d\n",ch-32,ch-32);
	return 0;
}

