//// 1.3 ��ģ�� 
//// 1.3.1 ��ģ���﷨
//// ��ģ�����ã�����һ��ͨ�õ��࣬���еĳ�Ա �������Ϳ��Բ�����ָ������һ�����������������
//// �﷨��template<typename T>
////		 ��
//// ���ͣ�template -- ��������ģ��
////		 typename -- ��������ķ�����һ���������ͣ�������class����
////		 T -- ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// ��ģ��
//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->m_name << " age = " << this->m_age << endl;
//	}
//public:
//	// ����
//	NameType m_name;
//	// ����
//	AgeType m_age;
//};
//void test1()
//{
//	Person<string, int>p1("�����", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺��ģ��ͺ���ģ��ǳ����ƣ�������ģ��template������࣬�����Ϊ��ģ��