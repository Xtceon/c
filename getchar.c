#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ret = 0;
	char passward[20] = { 0 };
	printf("���������룺");
	scanf("%s", &passward);		//�������벢�����passward��
	getchar();					//ͨ��getchar()�����������'\n'ȡ�ߣ�������뻺������ʹ����һ��getchar()��ȡ�µ�����
	printf("��ȷ�ϣ�Y/N��:");	
	ret = getchar();			//���ǰ�治��һ���յ�getchar(),��getchar����ȡ֮ǰ�������µ�'\n'����Y�Ƚ�֮�󣬽��Ϊ�٣�����else���
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȡ��ȷ�ϣ�\n");
	}
	return 0;
//scanfֻ�ܶ�ȡ�ո�ǰ�����ݣ������磺1234_ABCD,scanfֻ�Ὣ1234���������ʣ��_ABCD����һ��getchar������߿ո�_,����һ��getchar�����ABCD
//Ϊ��ʹ����һ��getchar��ȡ��ʱ�����뻺����Ϊ�գ�ʹ��whileѭ����ȡֱ������'\n'
	int ch = 0;
	while ((ch = getchar()) != '\n');
	{
		;
	}
}