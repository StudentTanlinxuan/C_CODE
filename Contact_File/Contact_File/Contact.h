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
//通讯录信息
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

enum Option//Option -- 选项
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
//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//记录当时已经有的元素个数
	int capacity;//当前通讯录的最大容量
};
//声明函数
//初始化通讯录的函数
void InitContact(struct Contact* ps);

//给通讯录中存放一个人的信息
void AddContact(struct Contact* ps);

//删除指定联系人
void DelContact(struct Contact* ps);

//查找指定联系人的信息
void SearchContact(const struct Contact* ps);

//修改指定联系人的信息
void ModifyContast(struct Contact* ps);

//打印通讯录中的信息
void ShowContact(const struct Contact* ps);

//排序
void SortContact(const struct Contact* ps);


//释放空间
void DestroyContact(struct Contact* ps);

//保存通讯录
void SaveContact(struct Contact* ps);

//加载通讯录
void LoadContact(struct Contact* ps);