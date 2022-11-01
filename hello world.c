#define _CRT_SECURE_NO_WARNINGS
									/*VS编辑器可能因为一些老的.c文件使用了
									strcpy,scanf等不安全的函数，
									而报警告和错误，而导致无法编译通过。*/
#include<stdio.h>					//包含一个stdio.h（standard input output ：std-standard（标准），i-input，o-output）的文件
int main()							//主函数——程序的入口，有且仅有一个
{
									//花括号内是函数执行的内容
	printf("Hello World!\n");		//printf输出函数  \n为转义符，功能是换行
	return 0;						//返回 0 ——根据int main（）返回一个整数0
}