#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

// ���� Person
class Person
{
	char m_Name[10];
	int m_Age;
	char m_Sex;
public:
	void Register(const char* name, int age, char sex)
	{
		strcpy(m_Name, name);
		m_Age = age;
		m_Sex = sex;
	}
	void ShowMe()
	{
		cout << "������" << m_Name << endl;
		if (m_Sex == 'm')
		{
			cout << "�Ա���" << endl;
		}
		else
		{
			cout << "�Ա�Ů" << endl;
		}
		cout << "���䣺" << m_Age << endl;
	}
};
// ������ Teacher
class Teacher :public Person
{
	char m_Dept[20];
	int m_Salary;
public:
	Teacher(const char* name, int age, char sex, const char* dept, int salary)
	{
		Register(name, age, sex);
		strcpy(m_Dept, dept);
		m_Salary = salary;
	}
	void Show()
	{
		cout << "������λ��" << m_Dept << endl;
		cout << "нˮ��" << m_Salary << endl;
	}
};
// ������ Student
class Student :public Person
{
	char m_ID[12];
	char m_Class[12];
public:
	Student(const char* name, int age, char sex, const char* ID, const char* Class)
	{
		Register(name, age, sex);
		strcpy(m_ID, ID);
		strcpy(m_Class, Class);
	}
	void Show()//��ʾ�������ݳ�Ա
	{
		cout << "�༶��" << m_Class << endl;
		cout << "ѧ�ţ�" << m_ID << endl;
	}
};
class Graduate :public Teacher, public Student
{
public:
	Graduate(const char* name, int age, char sex, const char* dept, int salary, const char* id, const char* classid)
		:Teacher(Teacher(name, age, sex, dept, salary)), Student(name, age, sex, id, classid)
	{

	}
	void ShowMe()
	{
		Student::Show();
		Person::ShowMe();
		Teacher::Show();
	}
};
int main()
{
	Graduate g("��ľ��", 22, 'f', "����ѧԺ", 2300, "04035003", "˶401");
	g.ShowMe();
	return 0;
}
// ���ؼ̳�
// class ���� : �̳з�ʽ ����, �̳з�ʽ ����