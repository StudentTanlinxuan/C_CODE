#include"employee.h"

// ��ʾ������Ϣ
void Employee::showInfo()
{
	cout<< "ְ��������" << this->m_Name
		<< "\tְ����ţ�" << this->m_Id
		<< "\t���ű�ţ�" << this->getDeptName()
		<< "\tְ��ְ����ɾ�����������" << endl;
}
// ��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}
// ���캯����ʵ��
Employee:: Employee(string name, int id, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Deptid = did;
}