#include<stdio.h>
#include<string.h>
#include<assert.h>

#define ElemType char
#define MAX 100
typedef struct Stack
{
  ElemType arr[MAX];
  int size;
}ST;
void StackInit(ST* st);

void Push_Stack(ST* st, ElemType v);

void Pop_Stack(ST* st);

ElemType GetTop(ST* st);

void Print_Stack(ST* st);


int checkbrackets(char* str);

char* torpolish(char* str);
