#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;//��ֹ����ѭ������ʼ��һ��ѭ���������֮�����䶼��ִ�У��ص�while��ʼ�µ��жϣ���continueǰ������һֱ���ܸı䣬��������ѭ��
		if (i == 8)
			break;//������ѭ��������ѭ�����
		printf("%d\n", i);
	}
}