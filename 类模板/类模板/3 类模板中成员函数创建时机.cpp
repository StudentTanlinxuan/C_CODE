//// 1.3.3 类模板中成员函数创建时机
//// 类模板中成员函数和普通类中的成员函数创建是有区别的：
//// 普通类中的成员函数一开始就可以创建
//// 类模板中的成员函数在调用时才创建
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
//	// 类模板中的成员函数
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
//	//m.func1();// 编译错误，说明在函数调用时才创建成员函数
//	m.func2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：类模板中成员函数并不是一开始就创建的，而是在调用时才去创建