#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

// 基类 Person
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
		cout << "姓名：" << m_Name << endl;
		if (m_Sex == 'm')
		{
			cout << "性别：男" << endl;
		}
		else
		{
			cout << "性别：女" << endl;
		}
		cout << "年龄：" << m_Age << endl;
	}
};
// 派生类 Teacher
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
		cout << "工作单位：" << m_Dept << endl;
		cout << "薪水：" << m_Salary << endl;
	}
};
// 派生类 Student
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
	void Show()//显示新增数据成员
	{
		cout << "班级：" << m_Class << endl;
		cout << "学号：" << m_ID << endl;
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
	Graduate g("李木子", 22, 'f', "电信学院", 2300, "04035003", "硕401");
	g.ShowMe();
	return 0;
}
// 多重继承
// class 子类 : 继承方式 父类, 继承方式 父类