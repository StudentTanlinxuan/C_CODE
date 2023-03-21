#include<stdio.h>

// 1. 串的顺序存储
// 1> 静态数组
#define MAXSIZE 1000 // 存放的最大字符串长度
typedef struct 
{
	char data[MAXSIZE]; // 用数组存储字符串中的元素
	unsigned int length; // 字符串中的元素长度
}String;
// 2> 动态分配
typedef struct // 字符串大小可以自动扩展
{
	char* data; // 存放字符串的首地址
	unsigned int maxsize; // 字符串最大长度
	unsigned int length; // 字符串实际长度

}String2;
int main()
{
	
	return 0;
}