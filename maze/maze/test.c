#define _CRT_SECURE_NO_WARNINGS 1

// https://www.nowcoder.com/questionTerminal/571cfbe764824f03b5c0bfd2eb0a8ddf

#include<string.h>
#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct Position {
	int row; // ��
	int col; // ��
}PT;
typedef PT TYDataType;
typedef struct Skack
{
	TYDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
//��ջ������Ԫ��
//��ջ
void StackPush(ST* ps, TYDataType X);
//��ջ
void StackPop(ST* ps);
//����ջ��Ԫ��
TYDataType StackTop(ST* ps);
//��ջ�е�Ԫ�ظ���
int StackSize(ST* ps);
//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (TYDataType*)malloc(sizeof(TYDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 4;
	//��topȡ0����topָ��ջ��Ԫ�ص���һ��
	//��topȡ-1����topָ��ջ��Ԫ��
	ps->top = 0;
}
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}
//��ջ������Ԫ��
//��ջ
void StackPush(ST* ps, TYDataType X)
{
	assert(ps);
	//�������,����Ҫ����
	if (ps->top == ps->capacity)
	{
		TYDataType* tmp = (TYDataType*)realloc(ps->a, sizeof(TYDataType) * (ps->capacity * 2));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = X;
	ps->top++;
}
//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	//���ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
	assert(ps->top > 0);
	ps->top--;
}
//����ջ��Ԫ��
TYDataType StackTop(ST* ps)
{
	assert(ps);
	//���ջ���ˣ�����Top��ֱ����ֹ���򱨴�
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//��ջ�е�Ԫ�ظ���
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
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
ST MinPath;
// ����Թ�·��
void PrintPath(ST* ps)
{
	// ��Path���ݵ���rPath
	ST rPath;
	StackInit(&rPath);
	while (!StackEmpty(ps))
	{
		StackPush(&rPath, StackTop(ps));
		StackPop(ps);
	}
	while (StackSize(&rPath) > 1)
	{
		PT top = StackTop(&rPath);
		printf("[%d,%d],", top.row, top.col);
		StackPop(&rPath);
	}
	PT top = StackTop(&rPath);
	printf("[%d,%d]", top.row, top.col);
	StackPop(&rPath);

	StackDestory(&rPath);
}
bool IsPass(int** maze, PT Pos, int M, int N)// pass ͨ��
{
	if (Pos.row >= 0 && Pos.row < M
		&& Pos.row >= 0 && Pos.col < N
		&& maze[Pos.row][Pos.col] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void StackCopy(ST* ppath, ST* pcopy)
{
	pcopy->a = (TYDataType*)malloc(sizeof(TYDataType*) * ppath->capacity);
	memcpy(pcopy->a, ppath->a, sizeof(TYDataType) * ppath->top);
	pcopy->capacity = ppath->capacity;
	pcopy->top = ppath->top;
}
void GetMazePath(int** maze, int M, int N, PT cur, int P)
{
	//StackInit(&Path);
	StackPush(&Path, cur);
	// �ҵ�������
	if (cur.row == 0 && cur.col == N - 1)
	{

		// �ҵ��˸��̵�·��������MinPath
		if (P >= 0 && StackEmpty(&MinPath)
			|| StackSize(&Path) < StackSize(&MinPath))
		{
			// ����MinPath������ֱ�Ӹ�ֵ����ֵ�ᵼ���ڴ�й©������ָ���ָ��ͬһ��ռ�
			StackDestory(&MinPath);
			StackCopy(&Path, &MinPath);
		}
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
		GetMazePath(maze, M, N, next, P - 3);
	}
	// ��
	next = cur;
	next.row += 1;
	if (IsPass(maze, next, M, N))
	{
		GetMazePath(maze, M, N, next, P);

	}
	// ��
	next = cur;
	next.col -= 1;
	if (IsPass(maze, next, M, N))
	{
		GetMazePath(maze, M, N, next, P - 1);

	}
	// ��
	next = cur;
	next.col += 1;
	if (IsPass(maze, next, M, N))
	{
		GetMazePath(maze, M, N, next, P - 1);

	}
	// ���ظ�·���ָ�Ϊ1
	maze[cur.row][cur.col] = 1;

	StackPop(&Path);

}
int main()
{
	// �����Թ�
	int M = 0, N = 0, P = 0;
	while (scanf("%d%d%d", &M, &N, &P) != EOF)
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
		StackInit(&Path);
		StackInit(&MinPath);
		PT enter = { 0,0 };
		GetMazePath(maze, M, N, enter, P);
		if (!StackEmpty(&MinPath))
		{
			PrintPath(&MinPath);
		}
		else
		{
			printf("Can not escape!\n");
		}

		StackDestory(&Path);
		StackDestory(&MinPath);


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