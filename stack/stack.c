#include"stack.h"


void StackInit(ST* st)
{
  memset(st->arr, 0, sizeof(ElemType));
  //int i = 0;
  //for(i = 0; i < MAX; i++)
  //{
  //  st->arr[i] = '0';
  //}
  st->size = 0;
}


void Push_Stack(ST* st, ElemType v)
{
  assert(st);
  assert(st->size < MAX);
  st->arr[st->size] = v;
  st->size++;
}

void Pop_Stack(ST* st)
{
  assert(st);
  st->size--;
}

ElemType GetTop(ST* st)
{
  assert(st);
  assert(st->size > 0);
  return st->arr[st->size - 1];
}

void Print_Stack(ST* st)
{
  assert(st);
  int i = 0;
  for (i = 0; i < st->size; i++)
  {
    printf("%c ", st->arr[i]);
  }
  printf("\n");
}

