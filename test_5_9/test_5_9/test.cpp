// 4.2.6 初始化列表
// 作用：c++提供了初始化列表语法，用于初始化属性
// 语法：构造函数():属性1(值1)，属性2(值2)，属性3(值3)...{}
// 注意的问题：特别要注意 ：的问题
//#include<iostream>
//
//using namespace std;
//class Person
//{
//public:
//	// 传统初始化
//	/*Person(int a, int b, int c)
//	{
//		m_A = a;
//		m_B = b;
//		m_C = c;
//	}*/
//	
//	// 列表初始化属性
//	// 这样写不太好，因为这样写将m_A,m_B,m_C只能等于10，20，30
//	/*Person() :m_A(10), m_B(20), m_C(30)
//	{
//
//	}*/
//	// 第二种写法
//	// 这种优化写法可以根据传入不同的值对属性m_A, m_B, m_C赋其不同的值
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//	int m_A;
//	int m_B;
//	int m_C;
//};
//void test1()
//{
//	// Person p(10, 20, 30);
//	// Person p;
//	Person p(30, 20, 10);
//	cout << "m_A = " << p.m_A << endl;
//	cout << "m_B = " << p.m_B << endl;
//	cout << "m_C = " << p.m_C << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

#include <iostream>
#include<string>

using namespace std;
// 4.2.7 类对象作为类成员
// c++类中的成员可以是另一个类的对象，我们称该成员为 对象成员
// 手机类
class Phone
{
public:
	// 给手机品牌名这个属性进行赋值
	Phone(string PName)
	{
		cout << "Phone 的构造函数调用" << endl;
		m_PName = PName;
	}
	~Phone()
	{
		cout << "Phone 析构函数调用" << endl;
	}
	// 手机品牌名
	string m_PName;
};
// 人类
class Person
{
public:
	// m_Pheno(PName) 等价于 Phone m_Phone = PName;  隐式转换法
	Person(string name, string PName) :m_PName(name), m_Pheno(PName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
	// 姓名
	string m_PName;
	// 手机
	Phone m_Pheno;

};
// 当其他类对象作为本类成员，构造是先构造类对象，再构造自身  析构的顺序与构造相反
// 构造的顺序：先调用对象成员的构造，再构造本类构造
void test1()
{
	Person p("张三", "苹果MAX");
	cout << p.m_PName << "拿着：" << p.m_Pheno.m_PName << endl;
}
int main()
{
	test1();
	return 0;
}