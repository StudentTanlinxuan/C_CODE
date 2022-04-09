#include<iostream>

using namespace std;
//// 对象的初始化和清理
//class Person
//{
//public:
//	// 1.构造函数
//	// 语法类名(){}
//	// 没有返回值，也不用写void
//	// 构造函数的名称和类名相同
//	// 构造函数可以有参数，因此可以发生函数重载
//	// 程序在调用对象时会自动调用构造函数，且只调用一次
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//	// 2.析构函数
//	// 语法~类名(){}
//	// 析构函数也没有返回值，也不用写void
//	// 析构函数的名称和类名相同，但是前面要加上~
//	// 析构函数不能有参数，因此不能发生函数重载
//	// 析构函数在销毁对象前会自动调用，且只调用一次
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//};
//void Test1()
//{
//	// 全局变量在栈区，执行完此函数编译器会自动销毁
//	// 构造函数和析构函数都是必须有的，如果我们自己不提供，编译器会自己提供一个空实现的构造和析构函数
//	Person p;
//}
//int main()
//{
//	//Test1();
//	Person p;
//	system("pause");
//	return 0;
//}

// 构造函数的分类及调用
// 1.分类
// 按照参数有无分，分为有参构造函数和无参构造函数(默认构造函数)
// 按照类型分，分为普通构造函数和拷贝构造函数
class Person
{
public:
	// 构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		m_Age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	// 构造拷贝构造函数
	Person(const Person& p)
	{
		// 将传入的人身上所有的属性拷贝到我身上
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	// 析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
//private:
	int m_Age;
};
// 2.调用
void test1()
{
	//1.括号法
	//// 默认构造函数的调用
	//Person p1;
	//// 有参构造函数的调用
	//Person p2(10);
	//// 拷贝构造函数的调用
	//Person p3(p2);
	//cout << "p2的年龄为：" << p2.m_Age << endl;
	//cout << "p3的年龄为：" << p3.m_Age << endl;
	// 注意事项1
	// 在调用无参构造函数时，不要再后面加()
	// 因为编译器会认为是一个函数的声明，不会认为是在创建对象
	//Person p1();
	//2.显示法
	Person p1;
	Person p2 = Person(10);// 有参构造函数的调用
	Person p3 = Person(p2);// 拷贝构造函数的调用

	//Person(10);// 匿名对象   特点：当前行执行完之后，系统会立即收回匿名对象
	//cout << "aaaa" << endl;

	// 注意事项2
	// 不要利用拷贝构造函数来初始化匿名对象，因为编译器会认为 Person(p3) == Person p3,会认为是对象的声明
	Person(p3);// 错误，p3被重定义
	//3.隐式转换法
	Person p4 = 10;// 有参构造 Person p4 = Person(10)
	Person p5 = p4;// 拷贝构造
	//不要利用拷贝构造函数来初始化匿名对象，因为编译器会认为 Person(p3) == Person p3, 会认为是对象的声明
	Person p5(p4);
}
int main()
{
	test1();
	return 0;
}