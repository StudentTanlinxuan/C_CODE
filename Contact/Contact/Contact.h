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
	int size; // �����ϵ�˵ĸ���
}Contact;

// ��ʼ��ͨѶ¼
void InitContact(Contact* ps);
// ����һ����ϵ��
void AddContact(Contact* ps);
// ɾ��һ����ϵ��
void DeleteContact(Contact* ps);
// ����һ��ָ����ϵ��
int FindContact(Contact* ps, string name);
// �޸���ϵ����Ϣ
void ModifContact(Contact* ps); // modification �޸�(����)
// ͨѶ¼������
void SortContact(Contact* ps);
// ����ͨѶ¼
void DestoryContact(Contact* ps);
// ��ӡͨѶ¼
void ShowContact(Contact* ps);