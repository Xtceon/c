#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_srot(int arr[], int sz)//�������飬�Լ���������������arr[]�����ݵ��������׸�Ԫ�صĵ�ַ
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//���flag=1����˵���������򣬲��ٽ��к����ȶ�
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp;//ͨ���м������������ֵ
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//�����жϣ����鲻��ȫ������Ȼ��Ҫ�ٴ�ѭ���ж�
			}
		}
		if (flag == 1)
			break;
	}
}


int main()
{
	int i = 0;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//��������
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	bubble_srot(arr, sz);//����ð�ݺ���
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}