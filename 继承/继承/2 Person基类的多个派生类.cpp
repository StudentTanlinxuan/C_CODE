//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//// 基类 Person
//class Person
//{
//private:
//	char m_Name[10]; 
//	char m_Sex;
//	int m_Age;
//public:
//	void Register(const char* name, char sex, int age)
//	{
//		// char* strcpy(char* strDestination(目的地), const char* strSource(源)); 
//		strcpy(m_Name, name);
//		m_Sex = sex;
//		m_Age = age;
//	}
//	void ShowMe()
//	{
//		cout << "姓名：" << m_Name << endl;
//		if (m_Sex == 'm')
//		{
//			cout << " 性别：男" << endl;
//		}
//		else
//		{
//			cout << " 性别：女" << endl;
//		}
//		cout << " 年龄：" << m_Age << endl;
//	}
//};
//// 派生类 Teacher
//class Teacher :public Person
//{
//private:
//	char m_Dept[20]; // 工作单位
//	int m_Salary; // 薪水
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
//		cout << " 工作单位：" << m_Dept << endl;
//		cout << " 薪水：" << m_Salary << endl;
//	}
//};
//// 派生类 Student
//class Student :public Person
//{
//private:
//	char m_ID[12]; // 学号
//	char m_ClassName[12]; // 班级
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
//		cout << " 学号：" << m_ID << endl;
//		cout << " 班级：" << m_ClassName << endl;
//	}
//};
//
//int main()
//{
//	Teacher t("章立早", 'm', 38, "电信学院", 2300);
//	Student s("李木子", 'f', 22, "02035003", "能动01");
//	t.ShowMe();
//	s.ShowMe();
//	return 0;
//}