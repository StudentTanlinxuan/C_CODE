#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//#define MAX 100
//#define STR "hehe"
//#define reg register//��register�滻Ϊreg
//#define do_forever for(;;)   //for(;;) - ��ѭ����do_forever�滻
////ע��:#define����ı������治�ӷֺ�(;)
//int main()
//{
//	do_forever;
//	//reg int a;
//	//register int a;
//	//int max = MAX;
//	//printf("%d\n", max);//100
//	//printf("%s\n", STR);//hehe
//	return 0;
//}

//#define SQUARE(x) (x)*(x)  //ʵ�����ǽ�x*x�滻��SQUARE(x)
////������ʱ��������ſ��Ա�����Ϊ���ȼ������µĴ���
//int main()
//{
//	/*int ret = SQUARE(5);
//	printf("%d\n", ret);*/
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#define MAX 100
//#define DOUBLE(x) ((x)+(x))
//int main()
//{
//	int ret = 10 * DOUBLE(MAX);
//	printf("MAX = %d\n", MAX);//�˴�"MAX = %d\n"�з�MAX���ᱻ#define �����100���滻
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//	//�������ܽ�"the value of a is %d\n"�е�a�滻Ϊ���������ַ�
//	//����Ҫ�����
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}

//#define PRINT(x) printf("the value of "#x" is %d\n",x)
////#���Ը��ַ����м���ɱ�ı���
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello" "world\n");
//	printf("he" "llo " "world\n");*/
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of""a"" is %d\n",a);
//	PRINT(b);
//	//printf("the value of""b"" is %d\n",b);
//	return 0;
//} 

//#define CAT(X,Y) X##Y
////##���Խ��������ƺ���һ��
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", Class84);
//	//printf("%d\n", CAT(Class, 84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = 0;
//	max = MAX(a++, b++);
//	//max = (a++) > (b++) ? (a++) : (b++);
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}

////����
//int Max(int x, int y)
//{
//	return (x) > (y) ? (x) : (y);
//}
//float Max2(float x, float y)
//{
//	return (x) > (y) ? (x) : (y);
//}
////��
//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//���ú�����ʱ��
//	//���к������úͷ��صĿ���
//	float max = Max2(c, d);
//	printf("%f\n", max);
//	//����Ԥ����׶ξ�������滻
//	//û�к����ĵ��ú�
//	max = MAX(c, d);
//	max = (c) > (d) ? (c) : (d);
//	printf("%d\n", max);
//	/*int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);*/
//	return 0;
//}

//#define SIZEOF(type)  sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type)  (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}
//
//#define MAX 100
//int main()
//{
//    // #undef  �Ƴ�һ���궨��
//	printf("%d\n", MAX);
//#undef MAX// ȡ������MAX
//	printf("%d\n", MAX);
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//#ifdef DEBUG ��ʾ��������,��ǰ�涨��DEBUGʱ,��ִ����#endif֮������
//		//����ִ��
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
//
//#define DEBUG
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//		//��#if������ʽΪ��ʱִ����#endif֮������
//		//����ִ��
//#if 0
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
//
//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 1==2 
//	printf("haha\n");
//#else
//	printf("�ٺ�\n");
//#endif
//	return 0;
//}
//
//#define DEBUG 0
//int main()
//{
////#if defined (DEBUG)
////	printf("hehe\n");
////	���������DEBUG,��ִ�д����,����ִ��
////#endif
////
////#ifdef DEBUG
////	printf("hehe\n");
////	//����������д����ȫ��ͬ
////#endif
////
////#if !defined (DEBUG)
////	printf("hehe\n");
////	//���������DEBUG,��ִ�д����,����ִ��
////	//�������෴
////#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//	//����������д����ȫ��ͬ
//#endif
//
//	return 0;
//}
//
#include <stddef.h>
struct S
{
	char c1;
	int a;
	char c2;
};

//#define OFFSETOF(struct_name,member_name)  (int)&(((struct_name*)0)->member_name)
//int main()
//{
//
//	printf("%d\n", OFFSETOF(struct S, c1));//0
//	printf("%d\n", OFFSETOF(struct S, a));//4
//	printf("%d\n", OFFSETOF(struct S, c2));//8
//	return 0;
//}
int main()
{
	struct S s = { 0 };
	//offsetof���Լ���������ĵ�ַ��ṹ����ʼλ�õ�ַ��ƫ����
	printf("%d\n", offsetof(struct S, c1));//0
	printf("%d\n", offsetof(struct S, a));//4
	printf("%d\n", offsetof(struct S, c2));//8
	return 0;
}