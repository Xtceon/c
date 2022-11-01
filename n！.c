#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ret = 1;
	int i = 0;
	int j = 0;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d的阶乘是：%d\n",n, ret);

	for (j = 1; j <= n; j++)
	{
		ret = 1;
		for (i = 1; i <= j; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}


	printf("1到%d的阶乘之和是：%d\n",n, sum);
	return 0;
}