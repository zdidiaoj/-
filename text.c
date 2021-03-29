#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("***   1.play    2.exit  ****\n");
	printf("****************************\n");
}
void game()
{
	char ret;
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	DispalyBoard(board, ROW, COL);
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DispalyBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); 
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DispalyBoard(board, ROW, COL);
		 ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢:>\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢:>\n");
	}
	else
	{
		printf("平局:>\n");
	}
}



void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); 
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入！\n");
			break;
		}
	} while (input);
}



int main()
{
	text();
	return 0;
}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", *arr);
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", &arr + 1);
//	printf("%p\n", arr + 1);
//	return 0;
//}
