#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"Stack.h"

//typedef struct Position {
//	int row; // 行
//	int col; // 列
//}PT;
// 打印迷宫
void PrintMaze(int** maze, int M, int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

ST Path;
// 输出迷宫路径
void PrintPath(ST* ps)
{
	// 将Path数据倒到rPath
	ST rPath;
	StackInit(&rPath);
	while (!StackEmpty(&ps))
	{
		StackPush(&rPath, StackTop(&ps));
		StackPop(&ps);
	}
	while (!StackEmpty(&rPath))
	{
		PT top = StackTop(&rPath);
		printf("(%d,%d)\n", top.row, top.col);
		StackPop(&rPath);
	}

	StackDestory(&rPath);
}
bool IsPass(int** maze, PT Pos, int M, int N)// pass 通过
{
	if (Pos.row >= 0 && Pos.row < M
		&& Pos.row >= 0 && Pos.col < N
		&& maze[Pos.row][Pos.col] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool GetMazePath(int** maze, int M, int N,PT cur)
{
	//StackInit(&Path);
	StackPush(&Path, cur);
	// 如果找到出口了则返回true
	if (cur.row == M - 1 && cur.col == N - 1)
	{
		return true;
	}
	// 找通路
	// 探索上下左右四个方向
	PT next;
	maze[cur.row][cur.col] = 2;

	// 上
	next = cur;
	next.row -= 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}
	// 下
	next = cur;
	next.row += 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}
	// 左
	next = cur;
	next.col -= 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}
	// 右
	next = cur;
	next.col += 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}

	StackPop(&Path);

	// 都不通则返回false
	return false;
}
int main()
{
	// 创建迷宫
	int M = 0, N = 0;
	while (scanf("%d%d", &M, &N) != EOF)
	{
		// int a[m][n]; 变长数组
		// vs不支持变长数组，所以需要动态开辟二维数组
		// 动态开辟二维数组，要先开辟一个指针数组，
		int** maze = (int**)malloc(sizeof(int*) * M);
		// 在开辟一个一维数组，让指针数组中的指针指向开辟的一维数组
		for (int i = 0; i < M; i++)
		{
			maze[i] = (int*)malloc(sizeof(int) * N);
		}
		// 输入二维数组
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf("%d", &maze[i][j]);
			}
		}
		// 写一部分测试一部分
		//PrintMaze(maze, M, N);
		PT enter = { 0,0 };
		//GetMazePath(maze, M, N, enter);
		StackInit(&Path);
		if (GetMazePath(maze, M, N, enter))
		{
			PrintPath(&Path);
			//printf("找到通路了\n");
		}
		else
		{
			printf("没有找到通路\n");
		}

		StackDestory(&Path);


		// 销毁迷宫
		// 销毁迷宫先要销毁maze[i],再销毁maze
		for (int i = 0; i < M; i++)
		{
			free(maze[i]);
		}
		free(maze);
		maze = NULL;
	}
	return 0;
}