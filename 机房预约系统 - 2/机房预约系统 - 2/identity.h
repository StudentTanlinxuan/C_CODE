#pragma once // ��ֹͷ�ļ��ظ�����
#include<iostream>

using namespace std;

// ��ݳ������  ֻ����ͷ�ļ����ɣ�����.cpp�ļ�
class Identity
{
public:
	// �����˵�
	virtual void operMenu() = 0; // ���麯��
public:
	string m_Name; // �û���
	string m_Pwd; // ����
};