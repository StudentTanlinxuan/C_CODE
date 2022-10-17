//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class Person
//{
//public:
//	char m_Name[10]; //姓名
//	int m_Age; //年龄
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数" << endl;
//	}
//	Person(char* name, int age)
//	{
//		strcpy(m_Name, name);
//		m_Age = age;
//		cout << "constructor of person" << m_Name << endl;
//	}
//	~Person()
//	{
//		cout << "deconstrutor of person" << m_Name << endl;
//	}
//};
//// 派生类 Student
//class Student :public Person
//{
//private:
//	char m_ClassName[10]; //班级
//	Person m_Monitor; //班长
//public:
//	Student(const char* name, int age, const char* classname, const char* name1, int age1)//name1和age1是班长的信息
//	{
//		strcpy(m_Name, name);
//		m_Age = age;
//		strcpy(m_ClassName, classname);
//		strcpy(m_Monitor.m_Name, name1);
//		m_Monitor.m_Age = age1;
//		cout << "constructor of Student" << endl;
//	}
//
//	~Student()
//	{
//		cout << "deconstrucor of Student" << endl;
//	}
//};
//
//int main()
//{
//	Student s("张弓长", 18, "计算机51", "李木子", 20);
//	return 0;
//}
//// 继承中，先调用父类的构造函数，再调用子类的构造函数，析构函数也与其顺序相反