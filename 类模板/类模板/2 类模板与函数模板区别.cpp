//// 1.3.2 ��ģ���뺯��ģ������
//// ��ģ���뺯��ģ��������Ҫ�����㣺
//// 1. ��ģ����ʹ��ʱû���Զ������Ƶ�
//// 2. ��ģ����ģ������б��п�����Ĭ�ϲ���
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_age = age;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->m_Name << " age = " << this->m_age << endl;
//	}
//public:
//	NameType m_Name;
//	AgeType m_age;
//
//};
//// 1. ��ģ����ʹ��ʱû���Զ������Ƶ�
//void test1()
//{
//	//Person p("�����", 1000);  error �޷�ʹ���Զ������Ƶ�
//
//	Person<string, int>p("�����", 1000);// ����ʹ����ʾָ��������ʹ����ģ��
//	p.showPerson();
//}
//// 2. ��ģ����ģ������б��п�����Ĭ�ϲ���
//void test2()
//{
//	Person<string>p("��˽�", 999);// ��ģ���е�ģ������б�����ָ��Ĭ�ϲ���
//	p.showPerson();
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺1. ��ģ��ֻ������ʽָ��������ʹ��
////		 2. ��ģ���ģ������б������Ĭ�ϲ���