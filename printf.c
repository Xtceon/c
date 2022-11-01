#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "hello world!!!\n";
	char arr2[] = "**************\n";
	int left = 0;
	int right = strten(arr1) - 1;
	//int right = 0;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//sleep(1000);
		left++;
		right--;
	}

	return 0;
}