#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	
	int a = 5;
	printf("请输入一个数字：");
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("这个数是奇数\n");
	else
		printf("这个数是偶数\n");
	return 0;

}