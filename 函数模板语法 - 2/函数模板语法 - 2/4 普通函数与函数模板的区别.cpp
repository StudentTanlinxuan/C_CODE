//#include<iostream>
//
//using namespace std;
//// 1.2.4 普通函数与函数模板的区别
//// 普通函数与函数模板的区别:
//// 1. 普通函数调用时可以发生自动类型转换（隐式类型转换）
//// 2. 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//// 3. 如果利用显示指定类型的方式，可以发生隐式类型转换
//
//// 普通函数
//int myAdd1(int a, int b)
//{
//	return a + b;
//}
//
//// 函数模板
//template<typename T>
//T myAdd2(T a, T b)
//{
//	return a + b;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << "a + b = " << myAdd1(a, b) << endl;
//	cout << "a + c = " << myAdd1(a, c) << endl;
//
//	// 使用函数模板有两种方法
//	// 1. 使用自动类型推导   不会发生隐式类型转换
//	cout << "a + b = " << myAdd2(a, b) << endl;
//	//cout << "a + b = " << myAdd2(a, c) << endl;// error  因为使用自动类型推导，不会发生隐式类型转换
//	// 2. 使用显示类型指定   会发生隐式类型转换
//	cout << "a + b = " << myAdd2<int>(a, b) << endl;
//	cout << "a + c = " << myAdd2<int>(a, c) << endl;// 告诉编译器，T的数据类型为int型，如果不是int类型则转换成int类型
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：在使用函数模板时，建议使用显示指定类型来使用函数模板，因为可以自己确定通用类型T的数据类型