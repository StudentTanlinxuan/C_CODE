#pragma once
#include<iostream>
#include<string>

using namespace std;
// ����һ������ְ���࣬��Ϊְ����Ա���������ϰ�
class Worker
{
public:
	// ��ʾ������Ϣ
	virtual void showInfo() = 0;
	// ��ȡ��λ����
	virtual string getDeptName() = 0;
public:
	string m_Name;// Ա������
	int m_Id;// Ա�����
	int m_Deptid;// ���ű��
};
