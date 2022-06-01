//// 1.3.8 类模板与友元
//// 全局函数类内实现 - 直接在类内声明友元即可
//// 全局函数类外实现 - 需要提前让编译器知道全局函数的存在
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// 提前让编译器知道Person类的存在
//template<class T1, class T2>
//class Person;
//
//// 提前让编译器知道函数的存在
//// 有两种方式让编译器提前知道这个函数的存在：
//// 1. 直接将函数实现放在前面
//// 2. 在前面写上函数声明，实现可以写在后面
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p);
//
//template<class T1, class T2>
//class Person
//{
//	// 全局函数实现打印Person信息
//	// 全局函数类内实现
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//	}
//	// 全局函数类外实现
//	// 加空模板参数列表
//	// 如果全局函数 是类外实现，需要提前让编译器知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现 -- 姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
//// 1. 全局函数类内实现
//void test1()
//{
//	Person<string, int> p("Tom", 18);
//	printPerson(p);
//}
//
//// 2. 全局函数类外实现
//void test2()
//{
//	Person<string, int> p("Jerry", 18);
//	printPerson2(p);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：建议全局函数做类内实现，用法简单，而且编译器可以直接识别