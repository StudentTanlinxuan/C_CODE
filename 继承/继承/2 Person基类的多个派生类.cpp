//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//// ���� Person
//class Person
//{
//private:
//	char m_Name[10]; 
//	char m_Sex;
//	int m_Age;
//public:
//	void Register(const char* name, char sex, int age)
//	{
//		// char* strcpy(char* strDestination(Ŀ�ĵ�), const char* strSource(Դ)); 
//		strcpy(m_Name, name);
//		m_Sex = sex;
//		m_Age = age;
//	}
//	void ShowMe()
//	{
//		cout << "������" << m_Name << endl;
//		if (m_Sex == 'm')
//		{
//			cout << " �Ա���" << endl;
//		}
//		else
//		{
//			cout << " �Ա�Ů" << endl;
//		}
//		cout << " ���䣺" << m_Age << endl;
//	}
//};
//// ������ Teacher
//class Teacher :public Person
//{
//private:
//	char m_Dept[20]; // ������λ
//	int m_Salary; // нˮ
//public:
//	Teacher(const char* name, char sex, int age, const char* dept, int salary)
//	{
//		this->Register(name, sex, age);
//		strcpy(m_Dept, dept);
//		m_Salary = salary;
//	}
//	void ShowMe()
//	{
//		this->Person::ShowMe();
//		cout << " ������λ��" << m_Dept << endl;
//		cout << " нˮ��" << m_Salary << endl;
//	}
//};
//// ������ Student
//class Student :public Person
//{
//private:
//	char m_ID[12]; // ѧ��
//	char m_ClassName[12]; // �༶
//public:
//	Student(const char* name, char sex, int age, const char* id, const char* classname)
//	{
//		this->Register(name, sex, age);
//		strcpy(m_ID, id);
//		strcpy(m_ClassName, classname);
//	}
//	void ShowMe()
//	{
//		this->Person::ShowMe();
//		cout << " ѧ�ţ�" << m_ID << endl;
//		cout << " �༶��" << m_ClassName << endl;
//	}
//};
//
//int main()
//{
//	Teacher t("������", 'm', 38, "����ѧԺ", 2300);
//	Student s("��ľ��", 'f', 22, "02035003", "�ܶ�01");
//	t.ShowMe();
//	s.ShowMe();
//	return 0;
//}