#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//运用回调函数实现加减乘除
int add(int x, int y)
{
	return x + y;
}
int min(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

int main()
{
	int A, B;
	scanf("%d%d", &A, &B);

	printf("%d + %d = %d\n", A, B, add(A, B));
	printf("%d - %d = %d\n", A, B, min(A, B));
	printf("%d * %d = %d\n", A, B, mul(A, B));
	printf("%d / %d = %d\n", A, B, div(A, B));

}