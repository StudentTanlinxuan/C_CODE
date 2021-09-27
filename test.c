#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//文件的顺序读写
//int main()
//{
//	FILE* pfWrite = fopen("text.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	//写文件
//	fputs("b", pfWrite);
//	fputs("i", pfWrite);
//	fputs("t", pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//
//int main()
//{
//
//FILE* pfRead = fopen("text.txt", "r");
//if (pfRead == NULL)
//{
//	printf("%s\n", strerror(errno));
//	return;
//}
//	//读文件
//	printf("%c",fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}
//
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	puts(buf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("bit", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	//等价于
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S
//{
//	int a;
//	float b;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fprintf(pf, "%d %f %s", s.a, s.b, s.arr);
//	printf("%d %f %s", s.a, s.b, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
