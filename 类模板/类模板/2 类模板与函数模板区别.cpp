//// 1.3.2 类模板与函数模板区别
//// 类模板与函数模板区别主要有两点：
//// 1. 类模板在使用时没有自动类型推导
//// 2. 类模板在模板参数列表中可以有默认参数
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_age = age;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->m_Name << " age = " << this->m_age << endl;
//	}
//public:
//	NameType m_Name;
//	AgeType m_age;
//
//};
//// 1. 类模板在使用时没有自动类型推导
//void test1()
//{
//	//Person p("孙悟空", 1000);  error 无法使用自动类型推导
//
//	Person<string, int>p("孙悟空", 1000);// 必须使用显示指定类型来使用类模板
//	p.showPerson();
//}
//// 2. 类模板在模板参数列表中可以有默认参数
//void test2()
//{
//	Person<string>p("猪八戒", 999);// 类模板中的模板参数列表，可以指定默认参数
//	p.showPerson();
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：1. 类模板只能用显式指定类型来使用
////		 2. 类模板的模板参数列表可以有默认参数