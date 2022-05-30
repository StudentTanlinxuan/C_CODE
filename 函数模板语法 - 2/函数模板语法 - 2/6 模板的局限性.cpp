#include<iostream>

using namespace std;
// 1.2.6 ģ��ľ�����
// �����ԣ�
// ģ���ͨ���Բ��������ܵ�
// ��Щ�ض��������ͣ���Ҫ�þ��廯����������ʵ��

// ����һ������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
public:
	// ����
	string m_name;
	// ����
	int m_age;
};

// �Ա����������Ƿ���Ⱥ���
template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// ���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
// ���廯ģ��ǰ�����template<>
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test1()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
void test2()
{
	Person p1("Tom", 20);
	Person p2("Tom", 10);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main()
{
	//test1();
	test2();
	return 0;
}
// �ܽ᣺���þ��廯ģ�壬���Խ���Զ������͵�ͨ�û�
//       ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��