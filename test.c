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
	printf("������һ�����֣�");
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("�����������\n");
	else
		printf("�������ż��\n");
	return 0;

}