///*�㷨��飺
//* find -- �����㷨
//* find_if -- ����������Ԫ��
//* adjacent_find -- ���������ظ�Ԫ��
//* binary_search -- ���ֲ����㷨
//* count -- ͳ��Ԫ�ظ���
//* count_if -- ������ͳ��Ԫ�ظ���
//*/
//
///*5.2.1 find
//* ���ã�����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�ص�������û�ҵ����ؽ���������(end)
//* ����ԭ�ͣ�
//* find(iterator beg, iterator end, value);
//* ��ֵ����Ԫ�أ��ҵ����ظ�Ԫ�ص��������Ҳ������ؽ���������(end)
//* beg ��ʼ������
//* end ����������
//* value ���ҵ�Ԫ��
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
//// find ��������������
//void test1()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	// ���������� �Ƿ��� 5 ���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "�Ҳ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << *it << endl;
//	}
//}
//
//// find ���Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	// ���� == �ײ�find֪����ζԱ�Person��������
//	/*bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}*/
//
//public:
//	string m_Name;
//	int m_Age;
//};
//void test2()
//{
//	vector<Person> v;
//	// ��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	Person pp("bbb", 20);
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// ����find��������������ָ��Ԫ�أ�����ֵ�ǵ�����