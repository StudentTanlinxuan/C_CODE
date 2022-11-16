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

int checkbrackets(char* str)
{
  ST temp;
  StackInit(&temp);
  int len = strlen(str);
  int i = 0;
  for (i = 0; i < len; i++)
  {
    if (str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<')
    {
      Push_Stack(&temp, str[i]);
    }
    if (str[i] == ')' || str[i] == ']' || str[i] == '}' || str[i] == '>')
    {
      if (str[i] == ')' && GetTop(&temp) != '(')
        return -1;
      if (str[i] == ']' && GetTop(&temp) != '[')
        return -1;
      if (str[i] == '}' && GetTop(&temp) != '{')
        return -1;
      if (str[i] == '>' && GetTop(&temp) != '<')
        return -1;
      Pop_Stack(&temp);
    }
  }
  if (temp.size != 0)
  {
    return -1;
  }
  return 1;
}

char* torpolish(char* str)
{
  ST ret;
  ST temp;
  StackInit(&temp);
  StackInit(&ret);
  int len = strlen(str);
  int pos = 0;
  while(pos < len){
    if (str[pos] != '+' && str[pos] != '-' && str[pos] != '*' && str[pos] != '/' && str[pos] != '(' && str[pos] != ')'){
      Push_Stack(&ret, str[pos]);
    }
    if (str[pos] == '('){
      Push_Stack(&temp, str[pos]);
    }
    if (str[pos] == ')'){
      while(GetTop(&temp) != '('){
        Push_Stack(&ret, GetTop(&temp));
        Pop_Stack(&temp);
      }
      Pop_Stack(&temp);
    }
    if (str[pos] == '+' || str[pos] == '-' || str[pos] == '*' || str[pos] == '/'){
      while(1){
      if (temp.size == 0){
         break;
      }
      char topval = GetTop(&temp);
      if (topval == '+' || topval == '-'){
        if (str[pos] == '+' || str[pos] == '-'){
          Push_Stack(&ret, GetTop(&temp));
          Pop_Stack(&temp);
        }
        else{
          break;
        }
      }
      if (topval == '*' || topval == '/'){
        Push_Stack(&ret, GetTop(&temp));
        Pop_Stack(&temp);
      }
      if (topval == '('){
        break;
      }
      }
      Push_Stack(&temp, str[pos]);
    }
    pos++;
  }
  if (temp.size != 0){
    while(temp.size){
      Push_Stack(&ret, GetTop(&temp));
      Pop_Stack(&temp);
    }
  }
  Push_Stack(&ret, '\0');
  printf("%s", ret.arr);
  return ret.arr;
}


