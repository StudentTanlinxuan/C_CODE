#include"Boss.h"

// 显示个人信息
void Boss::showInfo()
{
	cout << "职工姓名：" << m_Name
		<< "\t职工编号：" << m_Id
		<< "\t部门编号：" << m_Deptid
		<< "\t职工职责：管理公司所有的事情" << endl;
}
// 获取岗位名称
string Boss::getDeptName()
{
	return string("老板");
}
// 构造函数的实现
Boss::Boss(string name, int id, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Deptid = did;
}