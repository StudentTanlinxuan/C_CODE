//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class Person
//{
//public:
//	char m_Name[10]; //����
//	int m_Age; //����
//public:
//	Person()
//	{
//		cout << "Person Ĭ�Ϲ��캯��" << endl;
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
//// ������ Student
//class Student :public Person
//{
//private:
//	char m_ClassName[10]; //�༶
//	Person m_Monitor; //�೤
//public:
//	Student(const char* name, int age, const char* classname, const char* name1, int age1)//name1��age1�ǰ೤����Ϣ
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
//	Student s("�Ź���", 18, "�����51", "��ľ��", 20);
//	return 0;
//}
//// �̳��У��ȵ��ø���Ĺ��캯�����ٵ�������Ĺ��캯������������Ҳ����˳���෴