#pragma once
#include<iostream>
#include<string>

using namespace std;
// 创建一个抽象职工类，因为职称有员工，经理，老板
class Worker
{
public:
	// 显示个人信息
	virtual void showInfo() = 0;
	// 获取岗位名称
	virtual string getDeptName() = 0;
public:
	string m_Name;// 员工姓名
	int m_Id;// 员工编号
	int m_Deptid;// 部门编号
};
