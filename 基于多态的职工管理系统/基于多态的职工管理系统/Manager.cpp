#include"Manager.h"

// ��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ��������" << m_Name
		<< "\tְ����ţ�" << m_Id
		<< "\t���ű�ţ�" << m_Deptid
		<< "\tְ��ְ������ϰ彻��������" << endl;
}
// ��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}
// ���캯����ʵ��
Manager::Manager(string name, int id, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Deptid = did;
}