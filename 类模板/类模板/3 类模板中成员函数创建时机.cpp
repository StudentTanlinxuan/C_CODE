//// 1.3.3 ��ģ���г�Ա��������ʱ��
//// ��ģ���г�Ա��������ͨ���еĳ�Ա����������������ģ�
//// ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//// ��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
//
//#include<iostream>
//
//using namespace std;
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "show Person1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "show Person2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	// ��ģ���еĳ�Ա����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//public:
//	T obj;
//};
//void test1()
//{
//	MyClass<Person2>m;
//	//m.func1();// �������˵���ں�������ʱ�Ŵ�����Ա����
//	m.func2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺��ģ���г�Ա����������һ��ʼ�ʹ����ģ������ڵ���ʱ��ȥ����