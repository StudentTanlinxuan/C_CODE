//// 2.5.2 vector����Զ�����������
//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
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
//// ���Person����
//void test1()
//{
//	// ����һ��v����
//	vector<Person> v;
//
//	Person p1("����", 40);
//	Person p2("����", 30);
//	Person p3("�����", 20);
//	Person p4("����", 10);
//	Person p5("��Τ", 50);
//	// �������в�������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	// ��������
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
//		cout << "���� " << (*it).m_Name << " ���䣺" << (*it).m_Age << endl;
//	}
//
//	//Person* pp = &p1;
//	//cout << ( * pp).m_Name << endl;
//	//cout << pp->m_Age << endl;// ָ�����ֱ��ͨ��->�����ʵ�p1�е�����
//
//}
//
//// ���Person* ����
//void test2()
//{
//	// ����һ��v����
//	vector<Person*> v;
//
//	Person p1("����", 40);
//	Person p2("����", 30);
//	Person p3("�����", 20);
//	Person p4("����", 10);
//	Person p5("��Τ", 50);
//	// �������в�������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	// ����
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << ( * (*it)).m_Name << " ���䣺" << ( * (*it)).m_Age << endl;
//		cout << "������" << (*it)->m_Name << " ���䣺" << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}