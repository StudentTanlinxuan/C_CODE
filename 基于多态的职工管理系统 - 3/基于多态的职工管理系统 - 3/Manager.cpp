#include"Manager.h"

// ��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ��������" << this->m_Name
		<< "\tְ����ţ�" << this->m_Id
		<< "\t���ű�ţ�" << this->getDeptName()
		<< "\tְ��ְ������ϰ彻��������,���·������Ա��" << endl;
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