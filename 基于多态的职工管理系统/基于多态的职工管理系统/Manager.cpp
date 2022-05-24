#include"Manager.h"

// 显示个人信息
void Manager::showInfo()
{
	cout << "职工姓名：" << m_Name
		<< "\t职工编号：" << m_Id
		<< "\t部门编号：" << m_Deptid
		<< "\t职工职责：完成老板交给的任务" << endl;
}
// 获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}
// 构造函数的实现
Manager::Manager(string name, int id, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Deptid = did;
}