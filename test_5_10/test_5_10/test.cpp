#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

// 4.2.8静态成员
// 定义：静态成员就是在成员变量和函数前面加上关键字static，称其为静态成员
// 静态成员分为  静态成员变量和静态成员函数
// 静态成员变量： 所有对象共享同一份数据
//				  在编译阶段分配内存
//                类内声明，类外初始化


//class Person
//{
//public:
//	// 所有对象共享同一份数据
//	// 在编译阶段分配内存
//	// 类内声明，类外初始化
//	static int m_A;
//	// 静态成员变量也有一定的访问权限
//private:
//	static int m_B;
//};
//// 类外声明
//int Person:: m_A = 100;  // 类内声明
//// 写类外声明时记得不能在前面加static关键字  static int Person:: m_A = 10;
//int Person::m_B = 200;
//void test1()
//{
//	Person P;
//	// 输出的是100
//	cout << P.m_A << endl;
//
//	Person P2;
//	// 下面输出的是100还是200？   答案:200 因为所有对象共享同一个数据
//	P2.m_A = 200;
//	cout << P.m_A << endl;
//}
//void test2()
//{
//	// 静态成员变量  不属于某一个对象上 所有对象都共享同一份数据 
//	// 因此静态成员变量有两种访问方式
//	// 1.通过创建对象来进行访问
//	//Person P;
//	//cout << P.m_A << endl;
//	// 2.通过访问类名来进行访问
//	cout << Person::m_A << endl;  // Person::m_A 表示在Person这个类的作用域下的m_A
//
//	//cout << Person::m_B << endl; // 类外无法访问私有权限下的静态成员变量
//}
//int main()
//{
//	// test1();
//	test2();
//	return 0;
//}

// 静态成员函数： 所有对象共享统一函数
//                静态成员函数只能访问静态成员变量

class Person
{
public:
	// 静态成员函数
	// 1.所有的对象共享同一个函数
	// 2.静态成员函数只能访问静态成员变量
	static void func()
	{
		m_A = 100;// 静态成员函数可以访问静态成员变量  因为m_A是静态成员变量，不需要知道是哪个对象的属性，所有的对象都共享静态成员变量
		// m_B = 200;// 静态成员函数不可以访问非静态成员变量  无法区分到底是哪个对象的m_B这个属性
		cout << "static void func()函数的调用" << endl;
	}
	// 定义一个静态成员变量
	static int m_A;
	// 定义一个非静态成员变量
	int m_B;

	// 静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2函数的访问" << endl;
	}
};
int Person::m_A = 0;
void test1()
{
	// 静态成员函数的调用方法也有两种
	// 1.通过创建对象来访问
	Person p;
	p.func();
	// 2.通过类名来访问
	Person::func();

	//Person::func2();// 类外是不可以访问私有的静态成员函数
}
int main()
{
	test1();
	return 0;
}