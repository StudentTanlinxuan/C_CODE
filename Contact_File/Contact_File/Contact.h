#define _CRT_SECURE_NO_WARNINGS 1

#define DEFAULT_SZ 3
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//ͨѶ¼��Ϣ
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

enum Option//Option -- ѡ��
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ʱ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};
//��������
//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* ps);

//��ͨѶ¼�д��һ���˵���Ϣ
void AddContact(struct Contact* ps);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);

//����ָ����ϵ�˵���Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ����ϵ�˵���Ϣ
void ModifyContast(struct Contact* ps);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);

//����
void SortContact(const struct Contact* ps);


//�ͷſռ�
void DestroyContact(struct Contact* ps);

//����ͨѶ¼
void SaveContact(struct Contact* ps);

//����ͨѶ¼
void LoadContact(struct Contact* ps);