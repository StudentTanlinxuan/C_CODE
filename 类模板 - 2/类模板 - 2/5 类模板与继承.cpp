//// 1.3.5 ��ģ����̳�
//// ����ģ�������̳�ʱ����ע�����¼��㣺
//// 1. ������̳еĸ�����һ����ģ�壬����������ʱ��Ҫָ����������T����������
//// 2. �����ָ�����������޷�����������ڴ�
//// 3. ��������ָ�������е�T�����ͣ�����Ҳ���Ϊ��ģ��
//
//#include<iostream>
//
//using namespace std;
//template<class T>
//class Base
//{
//public:
//	Base()
//	{
//		cout << "������T����������Ϊ��" << typeid(T).name() << endl;
//	}
//public:
//	T m;
//};
//// 1. ������̳еĸ�����һ����ģ�壬����������ʱ��Ҫָ����������T����������
////class Son :public Base// error  ��Ϊ����Ҫ֪��������T�����ͣ����ܼ̳и�����
//class Son :public Base<int>// ok
//{
//
//};
//void test1()
//{
//	Son s1;
//}
//// 3. ��������ָ�������е�T�����ͣ�����Ҳ���Ϊ��ģ��
//template<class T1, class T2>
//class Son2 :public Base<T2>// �̳�ʱҪ���ø����еĹ��캯��
//{
//public:
//	Son2()
//	{
//		cout << "T1����������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2����������Ϊ��" << typeid(T2).name() << endl;
//	}
//public:
//	T1 s;
//};
//void test2()
//{
//	Son2<int, char> s;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺�����������ģ�壬������Ҫָ����������T����������