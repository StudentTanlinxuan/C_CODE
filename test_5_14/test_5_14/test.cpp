#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
// 4.5.4 ��ֵ���������
// C++���������ٻ��һ�������4������
// 1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
// 2.Ĭ����������(�޲Σ�������Ϊ��)
// 3.Ĭ�Ͽ������캯���������Խ���ֵ����
// 4.��ֵ�����operator=,�����Խ���ֵ����

// ���������������ָ������ģ�����ֵ����ʱҲ�������ǳ��������
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	// ���� ��ֵ �����
//	Person& operator=(Person& p)
//	{
//		// �������ṩ��ʱǳ����
//		//m_Age = p.m_Age;
//		
//		// ���ж��Ƿ���������ָ������ģ�����������ͷŸɾ���Ȼ���ٽ������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		// �ٽ������
//		m_Age = new int(*p.m_Age);
//		// ���ض�����
//		return *this;
//		// �������ֵ��ֵ��ʽ����������Ĭ�Ͽ������캯�����´����¶��󷵻أ����صľͲ��Ƕ�����
//	}
//public:
//	int* m_Age;
//};
//void test1()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1;// ��ֵ����
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//int main()
//{
//	test1();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//c = b = a;// ���Խ�������
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "c = " << c << endl;
//	return 0;
//}

// 4.5.5 ��ϵ���������
// ���ã����ع�ϵ�����������ʵ�������Զ������ݶ�����бȶԲ���
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return false;
//		}
//		return true;
//	}
//public:
//	string m_Name;
//
//	int m_Age;
//
//};
//void test1()
//{
//	Person p1("Tom", 18);
//
//	Person p2("Tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1 �� p2 ���" << endl;
//	}
//	else
//	{
//		cout << "p1 �� p2 �����" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "p1 �� p2 �����" << endl;
//	}
//	else
//	{
//		cout << "p1 �� p2 ���" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}

// 4.5.6 �����������������
// �������������()Ҳ��������
// �������غ��ʹ�÷�ʽ�ǳ��������ã���˳�Ϊ�º���
// �º���û�й̶�д�����ǳ����

// // ��ӡ�����
//class MyPrint
//{
//public:
//	// �����������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//void MyPrint2(string test)
//{
//	cout << test << endl;
//}
//void test1()
//{
//	MyPrint myprint;
//	myprint("hello world");// ����ʹ�������ǳ������ں������ã����Գ���Ϊ�º���
//
//	MyPrint2("hello world");
//}
//// �º���ʹ�������ǳ�����û��һ���̶���д�� 
//// �ӷ���
//class MyAdd
//{
//public:
//	// �����������������
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//void test2()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//	// ������������
//	cout << MyAdd()(100, 100) << endl;// MyAdd()����һ����������  ���������и��ص㣺ִ�������к������ͷ�
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// 4.6 �̳�
// 4.6.1 �̳еĻ����﷨

//// ��ͨʵ��ҳ��
//// Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()// content  ����
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//// Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//// C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()// content  ����
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//// ʹ�ü̳���ʵ��ҳ��
//// ����ҳ����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//};
//
//// �̳еĺô������ٴ����ظ�
//// �̳е��﷨��class ���� : �̳з�ʽ ����
//// class A : public B
//// A���Ϊ����  Ҳ��Ϊ  ������
//// B���Ϊ����  Ҳ��Ϊ  ����
//// ������ĳ�Ա�������󲿷֣�
//// һ���Ǵӻ���̳����ģ�һ�����Լ����ӵĳ�Ա
//// �ӻ���̳й����ı����乲�࣬�Լ������ӵĳ�Ա��������ԡ�
//
//// Javaҳ��
//class Java : public BasePage// �̳�BasePage��,ʹ���ڵ�public�г�Ա�����ڴ�չ��
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//// Pythonҳ�� 
//class Python : public BasePage // �̳�BasePage��
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//// C++ҳ��
//class CPP : public BasePage// �̳�BasePage��
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test1()
//{
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.left();
//	ja.content();
//	ja.footer();
//
//	cout << "------------------------------" << endl;
//	cout << "Python������Ƶҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.left();
//	py.content();
//	py.footer();
//
//	cout << "------------------------------" << endl;
//	cout << "C++������Ƶҳ�����£�" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.left();
//	cpp.content();
//	cpp.footer();
//}
//int main()
//{
//	test1();
//	return 0;
//}

// 4.6.2 �̳з�ʽ
// �̳е��﷨��class ���� : �̳з�ʽ  ����
// �̳з�ʽһ�������֣�
// �����̳�
// �����̳�
// ˽�м̳�

// �����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10; // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 20; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 30; // error �����е�˽�г�Ա  �������Ƿ��ʲ�����
	}
};
void test1()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100; // error ��Ϊm_B��Son1���Ǳ���Ȩ��  �����������ʲ���
}
// �����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 100;// �����еĹ���Ȩ�޵ĳ�Ա �������б�Ϊ����Ȩ��
		m_B = 100;// �����еı���Ȩ�޵ĳ�Ա ��������Ȼ�Ǳ���Ȩ��
		//m_C = 100;// error �����е�˽�г�Ա �����Ƿ��ʲ�����
	}
};
void test2()
{
	Son2 son1;
	//son1.m_A = 100;// error  ��Ϊ m_A ������Son2�б�ɱ���Ȩ��  �����������ʲ���
	//son1.m_B = 100;// error  m_B ������Son2����Ȼ�Ǳ���Ȩ��  ����Ҳ���ʲ���
}
// ˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 1000; // �����еĹ���Ȩ�޳�Ա  �������б�Ϊ ˽��Ȩ��
		m_B = 1000; // �����еı���Ȩ�޳�Ա  �������б�Ϊ ˽��Ȩ��
		//m_C = 1000; // error �����е�˽�г�Ա  ������ʲ��� 
	}
};
class GradeSon3 : public Son3
{
public:
	void func()
	{
		//m_A = 200; // error  m_A����Son3�б�Ϊ ˽��Ȩ�� ��ʹ�Ƕ��� Ҳ���ʲ���
		//m_B = 200; // error  m_B����Son3�б�Ϊ ˽��Ȩ�� ��ʹ�Ƕ��� Ҳ���ʲ���
	}
};
void test3()
{
	Son3 son3;
	//son3.m_A = 100; // error  �����е�m_A������Son3�б�Ϊ ˽��Ȩ�� ������ʲ���
	//son3.m_B = 100;  // error  �����е�m_B������Son3�б�Ϊ ˽��Ȩ�� ������ʲ���
}