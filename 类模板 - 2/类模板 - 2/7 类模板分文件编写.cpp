//// 1.3.7 类模板分文件编写
//// 问题：类模板成员函数在调用时期才创建，导致分文件编写链接不到
//// 解决：解决方式1：直接包含.cpp源文件
////		 解决方式2：将声明和实现写在同一个文件中，并更改后缀名为.hpp，.hpp是约定的名称，并不是强制
//
//#include<iostream>
//#include<string>
//
//// 第一种解决方法，直接包含 源文件
////#include"person.cpp"
//
//// 第二种解决方法，将.h和.cpp中的内容写在一起，将后缀名改为.hpp文件
//#include"person.hpp"
//
//using namespace std;
//
////template<class T1, class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////
////	void showPerson();
////public:
////	T1 m_Name;
////	T2 m_Age;
////};
//
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_Name = name;
////	this->m_Age = age;
////}
////
////template<class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
////}
//
//void test1()
//{
//	Person<string, int>p("Jerry", 18);
//	p.showPerson();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：主流的解决方式是第二种，将类模板成员函数写在一起，并将后缀名改为.hpp