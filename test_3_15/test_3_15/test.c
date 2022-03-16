#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"Stack.h"

//typedef struct Position {
//	int row; // ��
//	int col; // ��
//}PT;
// ��ӡ�Թ�
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
// ����Թ�·��
void PrintPath(ST* ps)
{
	// ��Path���ݵ���rPath
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
bool IsPass(int** maze, PT Pos, int M, int N)// pass ͨ��
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
	// ����ҵ��������򷵻�true
	if (cur.row == M - 1 && cur.col == N - 1)
	{
		return true;
	}
	// ��ͨ·
	// ̽�����������ĸ�����
	PT next;
	maze[cur.row][cur.col] = 2;

	// ��
	next = cur;
	next.row -= 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}
	// ��
	next = cur;
	next.row += 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}
	// ��
	next = cur;
	next.col -= 1;
	if (IsPass(maze, next, M, N))
	{
		if (GetMazePath(maze, M, N, next))
		{
			return true;
		}
	}
	// ��
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

	// ����ͨ�򷵻�false
	return false;
}
int main()
{
	// �����Թ�
	int M = 0, N = 0;
	while (scanf("%d%d", &M, &N) != EOF)
	{
		// int a[m][n]; �䳤����
		// vs��֧�ֱ䳤���飬������Ҫ��̬���ٶ�ά����
		// ��̬���ٶ�ά���飬Ҫ�ȿ���һ��ָ�����飬
		int** maze = (int**)malloc(sizeof(int*) * M);
		// �ڿ���һ��һά���飬��ָ�������е�ָ��ָ�򿪱ٵ�һά����
		for (int i = 0; i < M; i++)
		{
			maze[i] = (int*)malloc(sizeof(int) * N);
		}
		// �����ά����
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf("%d", &maze[i][j]);
			}
		}
		// дһ���ֲ���һ����
		//PrintMaze(maze, M, N);
		PT enter = { 0,0 };
		//GetMazePath(maze, M, N, enter);
		StackInit(&Path);
		if (GetMazePath(maze, M, N, enter))
		{
			PrintPath(&Path);
			//printf("�ҵ�ͨ·��\n");
		}
		else
		{
			printf("û���ҵ�ͨ·\n");
		}

		StackDestory(&Path);


		// �����Թ�
		// �����Թ���Ҫ����maze[i],������maze
		for (int i = 0; i < M; i++)
		{
			free(maze[i]);
		}
		free(maze);
		maze = NULL;
	}
	return 0;
}