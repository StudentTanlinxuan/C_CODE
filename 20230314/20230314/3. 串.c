#include<stdio.h>

// 1. ����˳��洢
// 1> ��̬����
#define MAXSIZE 1000 // ��ŵ�����ַ�������
typedef struct 
{
	char data[MAXSIZE]; // ������洢�ַ����е�Ԫ��
	unsigned int length; // �ַ����е�Ԫ�س���
}String;
// 2> ��̬����
typedef struct // �ַ�����С�����Զ���չ
{
	char* data; // ����ַ������׵�ַ
	unsigned int maxsize; // �ַ�����󳤶�
	unsigned int length; // �ַ���ʵ�ʳ���

}String2;
int main()
{
	
	return 0;
}