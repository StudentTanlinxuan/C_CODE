#include"Boss.h"

// ��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ��������" << this->m_Name
		<< "\tְ����ţ�" << this->m_Id
		<< "\t���ű�ţ�" << this->getDeptName()
		<< "\tְ��ְ�𣺹���˾���е�����" << endl;
}
// ��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ϰ�");
}
// ���캯����ʵ��
Boss::Boss(string name, int id, int did)
{
	this->m_Name = name;
	this->m_Id = id;
	this->m_Deptid = did;
}