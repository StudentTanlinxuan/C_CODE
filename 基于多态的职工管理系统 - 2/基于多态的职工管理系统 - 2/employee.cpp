#include"employee.h"

// 显示个人信息
void Employee::showInfo()
{
	cout<< "职工姓名：" << this->m_Name
		<< "\t职工编号：" << this->m_Id
		<< "\t部门编号：" << this->getDeptName()
		<< "\t职工职责：完成经理交给的任务" << endl;
}
// 获取岗位名称
string Employee::getDeptName()
{
	return string("员工");
}
// 构造函数的实现
Employee:: Employee(string name, int id, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Deptid = did;
}