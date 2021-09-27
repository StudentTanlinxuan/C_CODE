#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//struct S
//{
//	int a;
//	float b;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//  //格式化输入数据
//	fscanf(pf, "%d %f %s", &s.a, &s.b, s.arr);
//	printf("%d %lf %s", s.a, s.b, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &s.a, &s.b, s.arr);
//	fprintf(stdout, "%d %f %s", s.a, s.b, s.arr);
//	return 0;
//}

//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	char buf[1024] = { 0 };
//	struct S tmp = { 0 };
//	//将格式化的数据转换成字符串存储到buf中
//	sprintf(buf, "%d %f %s", s.a, s.b, s.arr);
//	//printf("%d %f %s", s.a, s.b, s.arr);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.a), &(tmp.b), tmp.arr);
//	printf("%d %lf %s", tmp.a, tmp.b, tmp.arr);
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};

//int main()
//{
//	struct S s = { "张三",30,99.99 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);//返回值是读取文件的个数
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的随机读取
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定义文件指针
//	fseek(pf, 4,SEEK_CUR);//第二个参数是偏移量
//	//第三个参数是从哪个位置偏移(有三个选择)
//	//1.SEEK_CUR - 从文件指针的当前位置  2.SEEK_END - 从文件结束位置  3.SEEK_SKT - 从文件起始位置
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定义文件指针
//	//fseek(pf, 4,SEEK_CUR);//第二个参数是偏移量
//	//第三个参数是从哪个位置偏移(有三个选择)
//	//1.SEEK_CUR - 从文件指针的当前位置  2.SEEK_END - 从文件结束位置  3.SEEK_SKT - 从文件起始位置
//	//fseek(pf, -2, SEEK_END);
//	int ch = getc(pf);
//	printf("%c\n", ch);
//	rewind(pf);//rewind - 让文件指针的位置回到起始位置
//	ch = getc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);
//	//ftell返回文件指针相对于文件起始位置的偏移量的大小
//	//printf("%d", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	//EOF -1
//	//EOF - end of file - 文件结束标志
//	//feof();
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	//strerror - 将错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//extern//声明外部的函数
//预处理符号
//int main()
//{
//	//__FILE__  代码所在源文件的名称
//	printf("%s\n", __FILE__);
//	//__LINE__  代码所在的行号
//	printf("%d\n", __LINE__);
//	//__DATE__  日期
//	printf("%s\n", __DATE__);
//	//__TIME__  时间
//	printf("%s\n", __TIME__);
//	//__FUNCTION__  所在函数的名字
//	printf("%s\n", __FUNCTION__);
//	return 0;
//}
//
//int main()
//{
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);//__STDC__ 如果编译器遵循ANSI c,其值为1,否则未定义
//	//vs 不遵循ANSI　ｃ
//	//gcc 遵循ANSI　ｃ
//	return 0;
//}
