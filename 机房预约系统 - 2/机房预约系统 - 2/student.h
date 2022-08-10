#pragma once

#include<iostream>
#include"identity.h"
using namespace std;

class Student: public Identity
{
public:
	// 默认构造
	Student();

	// 有参构造(学号，姓名，密码)
	Student(int id, string name, string pwd);

	// 菜单展示
	void operMenu();

	// 申请预约
	void applyOrder();

	// 查看我的预约
	void showMyOrder();

	// 查看所有预约
	void showAllOrder();

	// 取消预约
	void cancelOrder();

public:
	// 学号
	int m_Id;
};
