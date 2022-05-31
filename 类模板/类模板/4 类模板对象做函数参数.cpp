// 1.3.4 ��ģ���������������
// ѧϰĿ�꣺��ģ��ʵ�������Ķ����������εķ�ʽ

// һ�������ִ��뷽ʽ��
// 1. ָ����������� -- ֱ����ʾ�������������
// 2. ����ģ�廯 -- �������еĲ�����Ϊģ����д���
// 3. ������ģ�廯 -- ������������� ģ�廯���д���

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}
public:
	T1 m_Name;
	T2 m_Age;
};
// 1. ָ����������
void printPerson1(Person<string, int>&p)
{
	p.showPerson();
}
void test1()
{
	Person<string, int>p("�����", 100);
	printPerson1(p);
}
// 2. ����ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	// �鿴T����������
	cout << "T1���������ͣ�" << typeid(T1).name() << endl;
	cout << "T2���������ͣ�" << typeid(T2).name() << endl;
}
void test2()
{
	Person<string, int>p("��˽�", 90);
	printPerson2(p);
}

// 3. ������ģ�廯
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}
void test3()
{
	Person<string, int>p("��ɮ", 30);
	printPerson3(p);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
// �ܽ᣻ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���
//		 ʹ�ñȽϹ㷺���ǵ�һ�֣�ָ�����������