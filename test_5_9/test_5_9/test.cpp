// 4.2.6 ��ʼ���б�
// ���ã�c++�ṩ�˳�ʼ���б��﷨�����ڳ�ʼ������
// �﷨�����캯��():����1(ֵ1)������2(ֵ2)������3(ֵ3)...{}
// ע������⣺�ر�Ҫע�� ��������
//#include<iostream>
//
//using namespace std;
//class Person
//{
//public:
//	// ��ͳ��ʼ��
//	/*Person(int a, int b, int c)
//	{
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//	
//	// �б��ʼ������
//	// ����д��̫�ã���Ϊ����д��m_A,m_B,m_Cֻ�ܵ���10��20��30
//	/*Person() :m_A(10), m_B(20), m_C(30)
//	{
//
//	}*/
//	// �ڶ���д��
//	// �����Ż�д�����Ը��ݴ��벻ͬ��ֵ������m_A, m_B, m_C���䲻ͬ��ֵ
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//};
//void test1()
//{
//	// Person p(10, 20, 30);
//	// Person p;
//	Person p(30, 20, 10);
//	cout << "m_A = " << p.m_A << endl;
//	cout << "m_B = " << p.m_B << endl;
//	cout << "m_C = " << p.m_C << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

#include <iostream>
#include<string>

using namespace std;
// 4.2.7 �������Ϊ���Ա
// c++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ �����Ա
// �ֻ���
class Phone
{
public:
	// ���ֻ�Ʒ����������Խ��и�ֵ
	Phone(string PName)
	{
		cout << "Phone �Ĺ��캯������" << endl;
		m_PName = PName;
	}
	~Phone()
	{
		cout << "Phone ������������" << endl;
	}
	// �ֻ�Ʒ����
	string m_PName;
};
// ����
class Person
{
public:
	// m_Pheno(PName) �ȼ��� Phone m_Phone = PName;  ��ʽת����
	Person(string name, string PName) :m_PName(name), m_Pheno(PName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
	// ����
	string m_PName;
	// �ֻ�
	Phone m_Pheno;

};
// �������������Ϊ�����Ա���������ȹ���������ٹ�������  ������˳���빹���෴
// �����˳���ȵ��ö����Ա�Ĺ��죬�ٹ��챾�๹��
void test1()
{
	Person p("����", "ƻ��MAX");
	cout << p.m_PName << "���ţ�" << p.m_Pheno.m_PName << endl;
}
int main()
{
	test1();
	return 0;
}