#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;//终止本次循环，开始下一次循环（该语句之后的语句都不执行，回到while开始新的判断，若continue前的条件一直不能改变，将陷入死循环
		if (i == 8)
			break;//跳出该循环，结束循环语句
		printf("%d\n", i);
	}
}