#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ret = 0;
	char passward[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", &passward);		//输入密码并存放在passward中
	getchar();					//通过getchar()将键盘输入的'\n'取走，清空输入缓存区，使得下一个getchar()获取新的输入
	printf("请确认（Y/N）:");	
	ret = getchar();			//如果前面不加一个空的getchar(),该getchar将获取之前输入留下的'\n'当与Y比较之后，结果为假，进入else语句
	if (ret == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("取消确认！\n");
	}
	return 0;
//scanf只能读取空格前的内容，（例如：1234_ABCD,scanf只会将1234存入变量，剩下_ABCD）下一个getchar将会读走空格_,再下一个getchar会读走ABCD
//为了使得下一个getchar读取的时候，输入缓存区为空，使用while循环读取直到读到'\n'
	int ch = 0;
	while ((ch = getchar()) != '\n');
	{
		;
	}
}