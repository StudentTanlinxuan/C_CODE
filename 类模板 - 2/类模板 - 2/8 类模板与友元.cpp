//// 1.3.8 ��ģ������Ԫ
//// ȫ�ֺ�������ʵ�� - ֱ��������������Ԫ����
//// ȫ�ֺ�������ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// ��ǰ�ñ�����֪��Person��Ĵ���
//template<class T1, class T2>
//class Person;
//
//// ��ǰ�ñ�����֪�������Ĵ���
//// �����ַ�ʽ�ñ�������ǰ֪����������Ĵ��ڣ�
//// 1. ֱ�ӽ�����ʵ�ַ���ǰ��
//// 2. ��ǰ��д�Ϻ���������ʵ�ֿ���д�ں���
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p);
//
//template<class T1, class T2>
//class Person
//{
//	// ȫ�ֺ���ʵ�ִ�ӡPerson��Ϣ
//	// ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//	}
//	// ȫ�ֺ�������ʵ��
//	// �ӿ�ģ������б�
//	// ���ȫ�ֺ��� ������ʵ�֣���Ҫ��ǰ�ñ�����֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ�� -- ������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//}
//
//// 1. ȫ�ֺ�������ʵ��
//void test1()
//{
//	Person<string, int> p("Tom", 18);
//	printPerson(p);
//}
//
//// 2. ȫ�ֺ�������ʵ��
//void test2()
//{
//	Person<string, int> p("Jerry", 18);
//	printPerson2(p);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��