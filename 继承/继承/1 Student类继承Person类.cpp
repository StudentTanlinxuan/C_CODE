//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//// 基类 Person
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
//		cout << "姓名：" << m_Name << " 年龄：" << m_Age << " 性别：" << m_Sex << endl;
//	}
//};
//
//// 派生类 Student 
//class Student : public Person
//{
//	int m_Number;
//	char m_ClassName[10];
//public:
//	void RegisterStu(const char* classname, int number, const char* name, int age, char sex)
//	{
//		// 使用strcpy可以将字符串拷贝
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
//		cout << "电话：" << m_Number << " 教室：" << m_ClassName << "姓名：" << m_Name << " 年龄：" << m_Age << " 性别：" << m_Sex << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.RegisterStu("计算机", 5185071011, "张弓长", 18, 'm');
//	s1.ShowStu();
//	s1.ShowMe();
//	return 0;
//}