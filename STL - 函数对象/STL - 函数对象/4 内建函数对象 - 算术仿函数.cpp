///***�ڽ����������÷���**
//
//* ��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//* ʹ���ڽ�����������Ҫ����ͷ�ļ� `#include<functional>`*/
//
///*4.3.2 �����º���
//* ���ã�ʵ����������
//*		����negate��һԪ���㣬�������Ƕ�Ԫ����
//* **�º���ԭ�ͣ�**
//* template<class T> T plus<T>                //�ӷ��º���
//* template<class T> T minus<T>              //�����º���
//* template<class T> T multiplies<T>    //�˷��º���
//* template<class T> T divides<T>         //�����º���
//* template<class T> T modulus<T>         //ȡģ�º���
//* template<class T> T negate<T>           //ȡ���º���
//*/
//
//
//#include<iostream>
//#include<functional> // �ڽ���������ͷ�ļ�
//
//using namespace std;
//
//// negate һԪ�º��� ȡ���º���
//void test1()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//}
//
//// plus ��Ԫ�º��� �ӷ�
//void test2()
//{
//	plus<int> p; // ����ģ������б���ֻ��Ҫдһ�����ͣ���Ϊ������ֻ����������ͬ�����������
//
//	cout << p(10, 20) << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺ʹ���ڽ���������ʱ������Ҫ����ͷ�ļ�#include<functional>