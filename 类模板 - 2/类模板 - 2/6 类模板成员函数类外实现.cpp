//// 1.3.6 ��ģ���Ա��������ʵ��
//
//#include<iostream>
//#include<string>
// 
//using namespace std;
//
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age;
//	//}
//	void showPerson();
//	//{
//	//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//	//}
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// ���캯������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//// ��Ա��������ʵ��
//template<class T1, class T2>
//// ��ģ���Ա��������ʵ�ֲ��裺
//// 1. �Ƚ���ģ���г�Ա������������ճ������   void showPerson();
//// 2. �ȼ���Person��������Ϊ����ģ���Ա�������ټ���<T1, T2>
//// 3. �����Ϊ����������ʶT1,T2�����ͣ��ټ���template<class T1, class T2>�ñ�������ʶT1,T2����
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//}
//
//void test1()
//{
//	Person<string, int> P("Tom", 20);
//	P.showPerson();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺��ģ���Ա��������ʵ��ʱ����Ҫ����ģ������б�