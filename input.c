#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;											//定义一个变量，如整型int
	int b = 2;
	int sum = 0;
	printf("a = %d\nb = %d\nsum = %d\n", a, b, sum);	//printf输出函数   整型：%d
	scanf("%d%d", &a, &b);								//scanf输入函数：输入格式（%的），输入变量地址（&a）
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}