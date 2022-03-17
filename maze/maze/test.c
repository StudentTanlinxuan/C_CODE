#define _CRT_SECURE_NO_WARNINGS 1

// https://www.nowcoder.com/questionTerminal/571cfbe764824f03b5c0bfd2eb0a8ddf

#include<string.h>
#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct Position {
	int row; // 行
	int col; // 列
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
//从栈顶插入元素
//入栈
void StackPush(ST* ps, TYDataType X);
//出栈
void StackPop(ST* ps);
//查找栈顶元素
TYDataType StackTop(ST* ps);
//求栈中的元素个数
int StackSize(ST* ps);
//判断栈是否为空
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
	//若top取0，则top指向栈顶元素的下一个
	//若top取-1，则top指向栈顶元素
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
//从栈顶插入元素
//入栈
void StackPush(ST* ps, TYDataType X)
{
	assert(ps);
	//如果满了,则需要扩容
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
//出栈
void StackPop(ST* ps)
{
	assert(ps);
	//如果栈空了，调用Pop，直接终止程序报错
	assert(ps->top > 0);
	ps->top--;
}
//查找栈顶元素
TYDataType StackTop(ST* ps)
{
	assert(ps);
	//如果栈空了，调用Top，直接终止程序报错
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
//求栈中的元素个数
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//判断栈是否为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
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
ST MinPath;
// 输出迷宫路径
void PrintPath(ST* ps)
{
	// 将Path数据倒到rPath
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
bool IsPass(int** maze, PT Pos, int M, int N)// pass 通过
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
	// 找到出口了
	if (cur.row == 0 && cur.col == N - 1)
	{

		// 找到了更短的路径，更新MinPath
		if (P >= 0 && StackEmpty(&MinPath)
			|| StackSize(&Path) < StackSize(&MinPath))
		{
			// 更新MinPath，不能直接赋值，赋值会导致内存泄漏，两个指针会指向同一块空间
			StackDestory(&MinPath);
			StackCopy(&Path, &MinPath);
		}
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
		GetMazePath(maze, M, N, next, P - 3);
	}
	// 下
	next = cur;
	next.row += 1;
	if (IsPass(maze, next, M, N))
	{
		GetMazePath(maze, M, N, next, P);

	}
	// 左
	next = cur;
	next.col -= 1;
	if (IsPass(maze, next, M, N))
	{
		GetMazePath(maze, M, N, next, P - 1);

	}
	// 右
	next = cur;
	next.col += 1;
	if (IsPass(maze, next, M, N))
	{
		GetMazePath(maze, M, N, next, P - 1);

	}
	// 将重复路径恢复为1
	maze[cur.row][cur.col] = 1;

	StackPop(&Path);

}
int main()
{
	// 创建迷宫
	int M = 0, N = 0, P = 0;
	while (scanf("%d%d%d", &M, &N, &P) != EOF)
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