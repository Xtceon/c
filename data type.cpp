#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	short int b = 2;
	long int c = 3;
	float f = 3.1415926;
	double d = 3.1415926;
	char ch = 'A';
	
	printf("%d\n",a);						//%d - 打印整型  
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%f\n",f);						//%f - 打印单精度浮点型
	printf("%lf\n",d);						//%lf - 打印双精度浮点型
	printf("%c\n",ch);						//%c - 打印字符  
	printf("%p\n",ch);						//%p - 打印地址  
	printf("%o\n", 1234);					//%o - 打印八进制数 
	printf("%x\n", 1234);					// %x - 打印十六进制数

	printf("\n\n\n");

	printf("%d\n", sizeof(int));			//长度为4bit
	printf("%d\n", sizeof(short));			//长度为2bit
	printf("%d\n", sizeof(long));			//长度为4bit
	printf("%d\n", sizeof(long long));		//长度为8bit
	printf("%d\n", sizeof(float));			//长度为4bit
	printf("%d\n", sizeof(double));			//长度为8bit
	printf("%d\n", sizeof(char));			//长度为1bit
	//sizeof函数：内存容量度量函数（判断数据类型或者表达式的长度符）
	//计算机单位：bit（比特位:存放一个二进制数0或1）<byte（字节）<kb（千字节）<mb（兆字节）<gb（吉字节）<tb（太字节）
	
	return 0;
}