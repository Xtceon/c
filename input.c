#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;											//����һ��������������int
	int b = 2;
	int sum = 0;
	printf("a = %d\nb = %d\nsum = %d\n", a, b, sum);	//printf�������   ���ͣ�%d
	scanf("%d%d", &a, &b);								//scanf���뺯���������ʽ��%�ģ������������ַ��&a��
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}