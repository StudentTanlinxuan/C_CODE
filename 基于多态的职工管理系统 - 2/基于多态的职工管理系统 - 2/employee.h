#pragma once
#include<iostream>
#include<string>
#include"worker.h"

using namespace std;
// ����һ����ְͨ����
class Employee: public Worker
{
public:
	// ��д�����еĴ��麯��
	
	// ��ʾ������Ϣ
	virtual void showInfo();

	// ��ȡ��λ����
	virtual string getDeptName();

	// ���캯��
	Employee(string name, int id, int did);
};
