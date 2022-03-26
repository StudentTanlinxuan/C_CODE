#pragma once
#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

struct PeoInfo
{
	string name;
	string sex;
	string addr;
	string tele;
	int age;
};
#define MAX 1000
typedef struct Contact
{
	struct PeoInfo ContactArr[MAX];
	int size; // 存放联系人的个数
}Contact;

// 初始化通讯录
void InitContact(Contact* ps);
// 增加一个联系人
void AddContact(Contact* ps);
// 删除一个联系人
void DeleteContact(Contact* ps);
// 查找一个指定联系人
int FindContact(Contact* ps, string name);
// 修改联系人信息
void ModifContact(Contact* ps); // modification 修改(动词)
// 通讯录的排序
void SortContact(Contact* ps);
// 销毁通讯录
void DestoryContact(Contact* ps);
// 打印通讯录
void ShowContact(Contact* ps);