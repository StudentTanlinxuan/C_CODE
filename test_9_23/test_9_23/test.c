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
//  //��ʽ����������
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
//	//����ʽ��������ת�����ַ����洢��buf��
//	sprintf(buf, "%d %f %s", s.a, s.b, s.arr);
//	//printf("%d %f %s", s.a, s.b, s.arr);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
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
//	struct S s = { "����",30,99.99 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
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
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);//����ֵ�Ƕ�ȡ�ļ��ĸ���
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ��������ȡ
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.�����ļ�ָ��
//	fseek(pf, 4,SEEK_CUR);//�ڶ���������ƫ����
//	//�����������Ǵ��ĸ�λ��ƫ��(������ѡ��)
//	//1.SEEK_CUR - ���ļ�ָ��ĵ�ǰλ��  2.SEEK_END - ���ļ�����λ��  3.SEEK_SKT - ���ļ���ʼλ��
//	//2.��ȡ�ļ�
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
//	//1.�����ļ�ָ��
//	//fseek(pf, 4,SEEK_CUR);//�ڶ���������ƫ����
//	//�����������Ǵ��ĸ�λ��ƫ��(������ѡ��)
//	//1.SEEK_CUR - ���ļ�ָ��ĵ�ǰλ��  2.SEEK_END - ���ļ�����λ��  3.SEEK_SKT - ���ļ���ʼλ��
//	//fseek(pf, -2, SEEK_END);
//	int ch = getc(pf);
//	printf("%c\n", ch);
//	rewind(pf);//rewind - ���ļ�ָ���λ�ûص���ʼλ��
//	ch = getc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);
//	//ftell�����ļ�ָ��������ļ���ʼλ�õ�ƫ�����Ĵ�С
//	//printf("%d", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	//EOF -1
//	//EOF - end of file - �ļ�������־
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
//	//strerror - ���������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	//���ļ�
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
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//extern//�����ⲿ�ĺ���
//Ԥ�������
//int main()
//{
//	//__FILE__  ��������Դ�ļ�������
//	printf("%s\n", __FILE__);
//	//__LINE__  �������ڵ��к�
//	printf("%d\n", __LINE__);
//	//__DATE__  ����
//	printf("%s\n", __DATE__);
//	//__TIME__  ʱ��
//	printf("%s\n", __TIME__);
//	//__FUNCTION__  ���ں���������
//	printf("%s\n", __FUNCTION__);
//	return 0;
//}
//
//int main()
//{
//	//д��־�ļ�
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
//	printf("%d\n", __STDC__);//__STDC__ �����������ѭANSI c,��ֵΪ1,����δ����
//	//vs ����ѭANSI����
//	//gcc ��ѭANSI����
//	return 0;
//}
