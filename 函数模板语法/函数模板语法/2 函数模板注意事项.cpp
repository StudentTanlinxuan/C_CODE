//#include<iostream>
//
//using namespace std;
//// 1.2.2 函数模板注意事项
//template<class T>// typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// 注意事项：
//// 1. 在使用自动类型推导时，必须推导出一致的数据类型T,才可以使用
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);// ok
//	//mySwap(a, c);// error  因为推导不出一致的T类型
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//// 2. 模板必须要确定出T的数据类型，才可以使用
//template<typename T>
//void func()
//{
//	cout << "func()函数的调用" << endl;
//}
//void test2()
//{
//	// 必须指定出T的数据类型才可以使用函数模板
//	func<int>();
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：使用模板必须指定T的数据类型，而且必须推导出一致的数据类型