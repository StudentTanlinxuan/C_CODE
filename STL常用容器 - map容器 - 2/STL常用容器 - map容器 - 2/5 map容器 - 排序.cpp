///*3.9.6 map��������
//* ���ã�map����Ĭ���������Ϊ ����keyֵ�Ľ��дӴ�С����������θı��������
//* 
//* ���÷º��������Ըı��������
//*/
//
//
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		// ����
//		return v1 > v2;// ֻ��Ҫ�õ�һ�������ڵڶ��������ɣ�����֮
//	}
//};
//
//// ���÷º����ı�map���� ��������������� ���������
//void test1()
//{
//	map<int, int, MyCompare> m;
//	// mapĬ�������Ǹ���key��ֵ��С��������Ҫ��ı�������򣬿������÷º���������Ҫ�ڲ�������ǰ��ָ��
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(5, 50)); // map������������ʱ���Զ�����
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//
//	// ������ҲҪָ���������
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//
//}
//
//// ���÷º����ı�map���� ����Զ����������� ���������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//class PersonCompare
//{
//public:
//	bool operator()(Person p1, Person p2)const // �˴�����const�����C3848����
//		// ע�⣺��������Person p1����д�� Person& p1
//	{
//		// ����
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test2()
//{
//	map<Person, int, PersonCompare> m;
//
//	Person p1("����", 55);
//	Person p2("����", 50);
//	Person p3("�ŷ�", 40);
//	Person p4("�����", 60);
//
//	m.insert(make_pair(p1, 10));
//	m.insert(make_pair(p2, 20));
//	m.insert(make_pair(p3, 30));
//	m.insert(make_pair(p4, 40));
//
//	for (map<Person, int, PersonCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "������" << it->first.m_Name << " ���䣺" << it->first.m_Age << " value = " << it->second << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺���÷º�������ָ��map�������������
////		 �����Զ����������ͣ�map����Ҫָ���������ͬset����
//
//
//
////// C3848.cpp
////void glbFunc1()
////{
////}
////
////typedef void (*pFunc1)();
////
////struct S3
////{
////    operator pFunc1() const
////    {
////        return &glbFunc1;
////    }
////};
////
////int main()
////{
////    const S3 s3;
////    s3();   // C3848, uncomment const qualifier -- ȡ��ע�� const �޶��� �ͻ����C3848����
////}