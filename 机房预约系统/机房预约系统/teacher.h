#pragma once

#include<iostream>
#include"identity.h"
using namespace std;

class Teacher : public Identity
{
public:
	// Ĭ�Ϲ���
	Teacher();

	// �вι���(ְ����ţ�����������)
	Teacher(int empId, string name, string pwd);

	// �˵�չʾ
	void operMenu();

	// �鿴����ԤԼ
	void showAllOrder();

	// ���ԤԼ
	void vallidOrder();

public:
	// ��ʦ���
	int m_EmpId;
};
