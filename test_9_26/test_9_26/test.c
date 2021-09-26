#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//#define MAX 100
//#define STR "hehe"
//#define reg register//将register替换为reg
//#define do_forever for(;;)   //for(;;) - 死循环用do_forever替换
////注意:#define定义的变量后面不加分号(;)
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

//#define SQUARE(x) (x)*(x)  //实质上是将x*x替换成SQUARE(x)
////定义宏的时候加上括号可以避免因为优先级所导致的错误
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
//	printf("MAX = %d\n", MAX);//此处"MAX = %d\n"中发MAX不会被#define 定义的100所替换
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//	//函数不能将"the value of a is %d\n"中的a替换为传进来的字符
//	//则需要引入宏
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
////#可以给字符串中加入可变的变量
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
////##可以将两个名称合在一起
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

////函数
//int Max(int x, int y)
//{
//	return (x) > (y) ? (x) : (y);
//}
//float Max2(float x, float y)
//{
//	return (x) > (y) ? (x) : (y);
//}
////宏
//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//调用函数的时候
//	//会有函数调用和返回的开销
//	float max = Max2(c, d);
//	printf("%f\n", max);
//	//宏在预处理阶段就完成了替换
//	//没有函数的调用和
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
//    // #undef  移除一个宏定义
//	printf("%d\n", MAX);
//#undef MAX// 取消定义MAX
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
//		//#ifdef DEBUG 表示条件编译,当前面定义DEBUG时,则执行与#endif之间的语句
//		//否则不执行
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
//		//当#if后面表达式为真时执行与#endif之间的语句
//		//否则不执行
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
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}
//
//#define DEBUG 0
//int main()
//{
////#if defined (DEBUG)
////	printf("hehe\n");
////	如果定义了DEBUG,则执行此语句,否则不执行
////#endif
////
////#ifdef DEBUG
////	printf("hehe\n");
////	//与上面这种写法完全相同
////#endif
////
////#if !defined (DEBUG)
////	printf("hehe\n");
////	//如果定义了DEBUG,则不执行此语句,否则执行
////	//与上面相反
////#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//	//与上面这种写法完全相同
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
	//offsetof可以计算出变量的地址与结构体起始位置地址的偏移量
	printf("%d\n", offsetof(struct S, c1));//0
	printf("%d\n", offsetof(struct S, a));//4
	printf("%d\n", offsetof(struct S, c2));//8
	return 0;
}