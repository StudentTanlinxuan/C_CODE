#include<stdbool.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
typedef char TYDataType;
typedef struct Skack
{
    TYDataType* a;
    int top;
    int capacity;
}ST;
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

//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//1.�����ű�������ͬ���͵������űպϡ�
//2.�����ű�������ȷ��˳��պϡ�
//https://leetcode-cn.com/problems/valid-parentheses/
bool isValid(char* s) {
    ST st;
    StackInit(&st);
    while (*s != '\0')
    {
        switch (*s)
        {
        case'(':
        case'{':
        case'[':
            //Ϊ���������ջ
        {
            StackPush(&st, *s);
            s++;
            break;
        }
        case')':
        case'}':
        case']':
            //Ϊ���������ж�
            //����������
            //������򷵻�
        {
            if (StackEmpty(&st))
            {
                StackDestory(&st);
                return false;
            }
            char top = StackTop(&st);
            StackPop(&st);
            //��ƥ��
            if ((*s == ')' && top != '(')
                || (*s == '}' && top != '{')
                || (*s == ']' && top != '['))
            {
                StackDestory(&st);
                return false;
            }
            //ƥ��
            else
            {
                ++s;
            }
            break;
        }

        default:break;
        }

    }
    bool ret = StackEmpty(&st);
    StackDestory(&st);
    return ret;
}