#include<iostream>

using namespace std;

//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person���캯���ĵ���" << endl;
//	//}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Persom���������ĵ���" << endl;
//	}
//	//Person(int age)
//	//{
//	//	cout << "Person�вι��캯������" << endl;
//	//	m_Age = age;
//	//}
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//
//	int m_Age;
//};
//// �������캯���ĵ���ʱ��
//// 1.ʹ���Ѿ�ʵ�����Ķ�������ʼ����һ���¶���
//void test1()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
//// 2.ʹ��ֵ���ݵķ�ʽ��������ֵ
//void doWork(Person p)
//{
//
//}
//void test2()
//{
//	Person p;
//	doWork(p);
//}
//// 3.��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << &p1 << endl;
//	return p1; 
//}
//void test3()
//{
//	Person p = doWork2();
//	cout << &p << endl;
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

// ���캯�����ù���
// 1.ֻҪ������һ���࣬C++���������ÿ��������������������
// ���캯��  (�޲Σ���ʵ��)
// ��������  (�޲Σ���ʵ��)
// ��������  (����ֵ����)
//void test1()
//{
//	Person p1;
//	p1.m_Age = 18;
//	Person p2(p1);
//	cout << "p2������Ϊ" << p2.m_Age << endl;
//}
//// 2.����Լ��ṩ���вι��죬����������Ϊ�����ṩĬ�Ϲ��죬���ǻ��ǻ��ṩ��������
//// ����Լ��ṩ�˿������캯���������������ṩ������ͨ���캯��
//void test2()
//{
//	Person p;
//	//Person p(28);
//	//Person p2(p);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// ��ǳ��������(���Ծ�������)
// ǳ�������򵥵ĸ��ƿ�������
// ������ڶ�����������һ��ռ䣬���п�������
class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	~Person()
	{
		// �������룬���ڶ������ٵ������ͷ�
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person��������������" << endl;
	}
	// Ҫ�Լ���ƿ����������ǳ�������������� -- �������
	Person(const Person& p)
	{
		cout << "Person���������ĵ���" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;// ��������ʵ�ֵ������д���
		// Ҫ�����������������
		m_Height = new int(*p.m_Height);
	}
	Person(int age, int Height)
	{
		m_Age = age;
		m_Height = new int(Height);
		cout << "Person���вκ�������" << endl;
	}

	int m_Age;// ����
	int* m_Height;// ���
};
void test1()
{
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age << " ���Ϊ��" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << " ���Ϊ��" << *p2.m_Height << endl;
}
int main()
{
	test1();
	return 0;
}
// �ܽ᣺����������ڶ������ٵģ����Ǿ���Ҫ�Լ���ƿ������캯������ֹǳ��������������