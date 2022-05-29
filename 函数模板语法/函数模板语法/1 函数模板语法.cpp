////1. C++ 模板
////1.1 模板的概念：模板就是建立通用的模板，大大提高代码的复用性
////模板的特点：1.模板只是一个框架，不可以直接使用
////			  2. 模板的通用并不是万能的
//
////1.2 函数模板
////C++另一种编程思想称为 泛型编程，主要利用的就是模板
////C++提供两种模板机制：函数模板和类模板
//
////1.2.1 函数模板语法
////函数模板作用：建立一个通用函数，其返回值类型和形参类型可以不具体指定，用一个虚拟的类型来表示。
////语法：template<typename T>
////函数声明或定义
//
////解释：template -- 声明创建模板
////typename --表明其后面的符号是一种数据类型，可以用class代替
////T -- 通用的数据类型，名称可以替换，通常用大写字母
//
//#include<iostream>
//using namespace std;
//
//// 交换两个整型变量的函数
//void swapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 交换两个浮点型数据
//void swapDouble(double& c, double& d)
//{
//	double temp = c;
//	c = d;
//	d = temp;
//}
//
//// 函数模板
//template<typename T>// 声明一个模板，告诉编译器后面代码紧跟着T不要报错，T是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//	// 利用函数模板来交换两个数
//	// 两种方法使用函数模板
//
//	// 1. 自动类型推导
//	// mySwap(a, b);
//	// 2. 显式指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	/*double c = 1.1;
//	double d = 2.2;
//	swapDouble(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;*/
//
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：1. 函数模板利用关键字template
//// 		 2. 函数模板有两种使用方法 自动类型推导 和 显示指定类型
////       3. 模板目的是为了提高代码复用性，将类型参数化
