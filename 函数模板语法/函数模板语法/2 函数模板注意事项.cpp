//#include<iostream>
//
//using namespace std;
//// 1.2.2 ����ģ��ע������
//template<class T>// typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// ע�����
//// 1. ��ʹ���Զ������Ƶ�ʱ�������Ƶ���һ�µ���������T,�ſ���ʹ��
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);// ok
//	//mySwap(a, c);// error  ��Ϊ�Ƶ�����һ�µ�T����
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//// 2. ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<typename T>
//void func()
//{
//	cout << "func()�����ĵ���" << endl;
//}
//void test2()
//{
//	// ����ָ����T���������Ͳſ���ʹ�ú���ģ��
//	func<int>();
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺ʹ��ģ�����ָ��T���������ͣ����ұ����Ƶ���һ�µ���������