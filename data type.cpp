#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	short int b = 2;
	long int c = 3;
	float f = 3.1415926;
	double d = 3.1415926;
	char ch = 'A';
	
	printf("%d\n",a);						//%d - ��ӡ����  
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%f\n",f);						//%f - ��ӡ�����ȸ�����
	printf("%lf\n",d);						//%lf - ��ӡ˫���ȸ�����
	printf("%c\n",ch);						//%c - ��ӡ�ַ�  
	printf("%p\n",ch);						//%p - ��ӡ��ַ  
	printf("%o\n", 1234);					//%o - ��ӡ�˽����� 
	printf("%x\n", 1234);					// %x - ��ӡʮ��������

	printf("\n\n\n");

	printf("%d\n", sizeof(int));			//����Ϊ4bit
	printf("%d\n", sizeof(short));			//����Ϊ2bit
	printf("%d\n", sizeof(long));			//����Ϊ4bit
	printf("%d\n", sizeof(long long));		//����Ϊ8bit
	printf("%d\n", sizeof(float));			//����Ϊ4bit
	printf("%d\n", sizeof(double));			//����Ϊ8bit
	printf("%d\n", sizeof(char));			//����Ϊ1bit
	//sizeof�������ڴ����������������ж��������ͻ��߱��ʽ�ĳ��ȷ���
	//�������λ��bit������λ:���һ����������0��1��<byte���ֽڣ�<kb��ǧ�ֽڣ�<mb�����ֽڣ�<gb�����ֽڣ�<tb��̫�ֽڣ�
	
	return 0;
}