#pragma once

#include<iostream>
#include"identity.h"
using namespace std;

class Student: public Identity
{
public:
	// Ĭ�Ϲ���
	Student();

	// �вι���(ѧ�ţ�����������)
	Student(int id, string name, string pwd);

	// �˵�չʾ
	void operMenu();

	// ����ԤԼ
	void applyOrder();

	// �鿴�ҵ�ԤԼ
	void showMyOrder();

	// �鿴����ԤԼ
	void showAllOrder();

	// ȡ��ԤԼ
	void cancelOrder();

public:
	// ѧ��
	int m_Id;
};
