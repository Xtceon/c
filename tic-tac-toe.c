#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
void menu()
{
	printf("----------------------\n");
	printf("|  1.play    0.exit  |\n");
	printf("----------------------\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ�񣺣�1/0��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������1����0��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}