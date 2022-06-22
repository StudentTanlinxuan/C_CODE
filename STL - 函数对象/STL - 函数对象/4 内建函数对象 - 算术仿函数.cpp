///***内建函数对象用法：**
//
//* 这些仿函数所产生的对象，用法和一般函数完全相同
//* 使用内建函数对象，需要引入头文件 `#include<functional>`*/
//
///*4.3.2 算术仿函数
//* 作用：实现四则运算
//*		其中negate是一元运算，其他都是二元运算
//* **仿函数原型：**
//* template<class T> T plus<T>                //加法仿函数
//* template<class T> T minus<T>              //减法仿函数
//* template<class T> T multiplies<T>    //乘法仿函数
//* template<class T> T divides<T>         //除法仿函数
//* template<class T> T modulus<T>         //取模仿函数
//* template<class T> T negate<T>           //取反仿函数
//*/
//
//
//#include<iostream>
//#include<functional> // 内建函数对象头文件
//
//using namespace std;
//
//// negate 一元仿函数 取反仿函数
//void test1()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//}
//
//// plus 二元仿函数 加法
//void test2()
//{
//	plus<int> p; // 函数模板参数列表中只需要写一个类型，因为编译器只会让两个相同类型数据相加
//
//	cout << p(10, 20) << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：使用内建函数对象时，必须要包含头文件#include<functional>