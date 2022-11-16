#define _CRT_SECURE_NO_WARNINGS
#include"stack.h"

int main()
{
	//printf("请输入：>\n");
	printf("please input!\n");
  char arr[MAX] = { 0 };
  scanf("%s", arr);
  printf("arr = %s\n", arr);
  char* ret = torpolish(arr);
  //printf("ret = %s\n", ret);
  //printf("请输入要匹配的括号字符串!");
  //char arr[MAX] = { 0 };
  //scanf("%s", arr);
  //int ret = checkbrackets(arr);
  //if (ret == 1)
  //{
  //  printf("匹配成功！\n");
  //}
  //else{
  //  printf("匹配失败!\n");
  //}
//  ST s;
//  StackInit(&s); 
//  ElemType top = GetTop(&s);
//  printf("%c\n", top);
//  Push_Stack(&s, 'a');
//  Push_Stack(&s, 'g');
//  Push_Stack(&s, 'e');
//  Push_Stack(&s, 't');
//  Push_Stack(&s, 'u');
//  top = GetTop(&s);
//  printf("%c\n", top);
//  Print_Stack(&s);
//  Pop_Stack(&s);
//  Pop_Stack(&s);
//  Pop_Stack(&s);
//  top = GetTop(&s);
//  printf("%c\n", top);
//  Print_Stack(&s);
//
  return 0;
}
