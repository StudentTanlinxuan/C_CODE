///*5.2.5 count
//* ���ã�ͳ��Ԫ�ظ���
//* ����ԭ�ͣ�
//* count(iterator beg, iterator end, value);
//* ͳ��Ԫ�س��ֵĴ���
//* beg ��ʼ������
//* end ����������
//* value ͳ�Ƶ�Ԫ��
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//// 1��������������
//void test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(30);
//
//	int num = count(v.begin(), v.end(), 40);
//	cout << "40�ĸ���Ϊ��" << num << endl;
//}
//
//// 2�����Զ�����������
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void test2()
//{
//	vector<Person> v;
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("�����", 35);
//	// ͳ���������ͬ����˵ĸ���
//	int num = count(v.begin(), v.end(), p);
//	cout << "�������ͬ�������˵ĸ���Ϊ��" << num << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺��ͳ���Զ�����������ʱ����Ҫ�������operator==��ʹ��