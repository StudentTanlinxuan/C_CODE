//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//// ���� Person
//class Person
//{
//public:
//	char m_Name[20];
//	char m_Sex;
//	int m_Age;
//public:
//	void Register(const char* name, int age, char sex)
//	{
//		strcpy(m_Name, name);
//		// m_Name = name;
//		m_Age = age;
//		m_Sex = sex;
//	}
//	void ShowMe()
//	{
//		cout << "������" << m_Name << " ���䣺" << m_Age << " �Ա�" << m_Sex << endl;
//	}
//};
//
//// ������ Student 
//class Student : public Person
//{
//	int m_Number;
//	char m_ClassName[10];
//public:
//	void RegisterStu(const char* classname, int number, const char* name, int age, char sex)
//	{
//		// ʹ��strcpy���Խ��ַ�������
//		strcpy(m_ClassName, classname);
//		// m_ClassName = classname;
//		m_Number = number;
//		strcpy(m_Name, name);
//		//m_Name = name;
//		m_Age = age;
//		m_Sex = sex;
//	}
//	void ShowStu()
//	{
//		cout << "�绰��" << m_Number << " ���ң�" << m_ClassName << "������" << m_Name << " ���䣺" << m_Age << " �Ա�" << m_Sex << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.RegisterStu("�����", 5185071011, "�Ź���", 18, 'm');
//	s1.ShowStu();
//	s1.ShowMe();
//	return 0;
//}