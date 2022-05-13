#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
// 4.5.2 左移运算符重载
// 作用：可以输出自定义数据类型

//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	// 利用成员函数 重载左移运算符
//	
//	//void operator<<(Person& p)// 这样子写的话，调用的时候会有两个对象。
//	//// 调用这个成员函数p1.operator<<(p2),显然这样不符合要求
//	//{
//	//}
//
//	//void operator<<(ostream& cout)// 这样写的话，调用时会出现p1 << cout。显然也不符合要求，但是这样写可以重载左移运算符
//	//{
//	//	cout << "m_A = " << this->m_A << endl;
//	//	cout << "m_B = " << this->m_B << endl;
//	//}
//	
//	// 所以我们不会利用成员函数重载左移运算符，因为无法实现cout在左侧
//private:
//	int m_A;
//
//	int m_B;
//};
//// 只能利用全局函数重载左移运算符
//ostream& operator<<(ostream& cout, Person& p) // cout的类型为ostrean(标准输出流)，而且只能有一个，所以采用引用来传参
//// 本质operator<<(cout, p) 简化：cout << p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout; // 这个全局函数里面cout可以顺便更改，因为采用的是引用的传参方式，不管改的啥都指向的是cout这块内存空间
//}
//void test1()
//{
//	Person p1(10,10);
//	//p1.m_A = 10;
//	//p1.m_B = 10;
//
//	//p1.operator<<(cout); // 简化：p1 << cout;
//	//p1 << cout;
//
//	cout << p1 << " hello world" << endl;// 链式编程
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：左移运算符配合友元可以实现输出自定义数据类型

// 4.5.3 递增运算符重载
// 作用：通过递增运算符，实现自己的整形数据

// 创建一个自己的整形
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	// 前置++运算符重载
	MyInteger& operator++()
	// 这里必须使用引用进行返回，因为使用值方式进行返回的话会出现问题。
	// 递增的运算符是一直在同一个数据进行递增，如果使用了值方式返回返回的是一个新创建数据
	{
		// 先进行++运算符
		m_Num++;
		// 再将自身进行返回
		return *this;
	}
	// 后置++运算符重载
	MyInteger operator++(int)// 必须采用int来做占位操作,用来区分前置++和后置++
	// 不然编译器会认为和75行这个成员函数同名
	// 这里必须使用值返回的方式，如果使用址返回会出现非法访问
	{
		// 先进行记录当时结果
		MyInteger temp = *this;
		// 再进行递增
		m_Nums++;
		// 最后将记录结果返回
		return temp;
	}
private:
	int m_Num;
};
// 全局函数实现左移运算符重载
ostream& operator<<(ostream& cout, MyInteger& myint)
{
	cout << "m_Num = " << myint.m_Num << endl;
	return cout;
}
void test1()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;

}
void test2()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test1();
	test2();
	//int a = 0;
	////cout << ++a << endl;
	//cout << ++(++a) << endl;
	//cout << a << endl;// 证明了++运算符对a的递增一直都是同一个a
	return 0;
}
// 总结：前置++返回引用，后置++返回值
