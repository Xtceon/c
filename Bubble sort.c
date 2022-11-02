#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_srot(int arr[], int sz)//传入数组，以及数组个数，如果是arr[]，传递的是数组首各元素的地址
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//如果flag=1，则说明数组有序，不再进行后续比对
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp;//通过中间变量交换数组值
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本次判断，数组不完全有序，仍然需要再次循环判断
			}
		}
		if (flag == 1)
			break;
	}
}


int main()
{
	int i = 0;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//定义数组
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	bubble_srot(arr, sz);//调用冒泡函数
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}