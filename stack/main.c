#include"stack.h"

int main()
{
  ST s;
  StackInit(&s); 
  ElemType top = GetTop(&s);
  printf("%c\n", top);
  Push_Stack(&s, 'a');
  Push_Stack(&s, 'g');
  Push_Stack(&s, 'e');
  Push_Stack(&s, 't');
  Push_Stack(&s, 'u');
  top = GetTop(&s);
  printf("%c\n", top);
  Print_Stack(&s);
  Pop_Stack(&s);
  Pop_Stack(&s);
  Pop_Stack(&s);
  top = GetTop(&s);
  printf("%c\n", top);
  Print_Stack(&s);

  return 0;
}
