#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//�ļ���˳���д
//int main()
//{
//	FILE* pfWrite = fopen("text.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	//д�ļ�
//	fputs("b", pfWrite);
//	fputs("i", pfWrite);
//	fputs("t", pfWrite);
//	//�ر��ļ�
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
//	//���ļ�
//	printf("%c",fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//�ر��ļ�
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
//	//���ļ�
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
//	//д�ļ�
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//	//�ر��ļ�
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
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	//�ر��ļ�
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
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("bit", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�������׼�����
//
//	//�ȼ���
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
//	//д�ļ�
//	fprintf(pf, "%d %f %s", s.a, s.b, s.arr);
//	printf("%d %f %s", s.a, s.b, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
