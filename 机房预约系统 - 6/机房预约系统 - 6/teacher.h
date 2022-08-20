#pragma once

#include<iostream>
#include"identity.h"
using namespace std;

class Teacher : public Identity
{
public:
	// 默认构造
	Teacher();

	// 有参构造(职工编号，姓名，密码)
	Teacher(int empId, string name, string pwd);

	// 菜单展示
	void operMenu();

	// 查看所有预约
	void showAllOrder();

	// 审核预约
	void vallidOrder();

public:
	// 教师编号
	int m_EmpId;
};
