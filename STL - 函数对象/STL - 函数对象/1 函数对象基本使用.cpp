///*#### 4.1.2  ��������ʹ��
//**�ص㣺**
//* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//* �������󳬳���ͨ�����ĸ����������������Լ���״̬
//* �������������Ϊ��������*/
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// 1. ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//void test1()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//
//// 2. �������󳬳���ͨ�����ĸ����������������Լ���״̬
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++; // ͳ��ʹ�ô���
//	}
//public:
//	int count; // �ڲ��Լ���״̬
//};
//
//void test2()
//{
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//
//	cout << "myPrint���ô���Ϊ��" << myPrint.count << endl;
//}
//
//// 3. �������������Ϊ��������
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test3()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "hello C++");
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//// �ܽ᣺�º���д���ǳ���������Ϊ�������д���