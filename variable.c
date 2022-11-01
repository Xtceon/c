#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int num1 = 10;								//全局变量-定义在代码块：{ }  之外的变量,作用域为全局可用
int num2 = 20;
int main()
{
	int num1 = 30;							//局部变量-定义在代码块：{ }  之内的变量，作用域仅限于变量定义的 {} 内，局部变量和全局变量可以同名共存，但是局部变量优先
		printf("%d\n%d\n", num1, num2);
		extern int g_val;					//声明外部变量
		printf("g_val = %d\n", g_val);
	return 0;
											//局部变量的生命周期：进入作用域生命周期开始  ‘{ ’  出作用域生命周期结束  ‘} ’
											//全局变量的生命周期：整个程序的生命周期
}