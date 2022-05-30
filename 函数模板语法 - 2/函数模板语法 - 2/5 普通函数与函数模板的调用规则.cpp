//#include<iostream>
//
//using namespace std;
//// 1.2.5 普通函数与函数模板的调用规则
//// 调用规则如下：
//// 1. 如果普通函数与函数模板都可以调用，则先调用普通函数
//// 2. 可以通过空模板参数列表来强制调用函数模板
//// 3. 函数模板也可以发生函数重载
//// 4. 如果函数模板可以产生更好的匹配，优先调用函数模板
//
//// 普通函数
//void myPrint(int a, int b)
//{
//	cout << "调用的是普通函数" << endl;
//}
//
//// 函数模板
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "调用的是函数模板" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用的是重载函数模板" << endl;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//	
//	// 通过 空模板参数列表 ，强制调用函数模板
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	// 如果函数模板可以产生更好的匹配，优先调用函数模板
//	char c = 'a';
//	char d = 'b';
//	myPrint(c, d);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：既然已经提供了函数模板，最好不要提供普通函数，否则容易出现二义性