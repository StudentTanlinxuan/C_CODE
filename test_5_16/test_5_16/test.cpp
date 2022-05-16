#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
// 4.6.3 继承中的对象模型
// 问题：从父类继承过来的成员，哪些属于子类对象中？
//// 创建一个父类
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//// 创建一个子类
//// 公共继承
//class Son : public Base
//{
//public:
//	int m_D;
//};
//// 利用开发人员命令提示工具查看对象模型
//// 跳转盘符 D:
//// 跳转文件路径 cd 具体路径下
//// 查看命令
//// cl /d1 reportSingleClassLayout类名 文件名
//void test1()
//{
//	Son son;
//	// 16
//	// 父类中的所有非静态成员属性，都会被子类继承下去
//	// 父类中的私有成员属性，是被编译器隐藏了，因此是访问不到，但是确实被继承下去了 
//	cout << "sizeof(son) = " << sizeof(son) << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：父类中私有属性成员也是被子类继承下去了，由于编译器给隐藏后访问不到

//// 4.6.4 继承中的构造和析构顺序
//// 子类继承父类后，当创建子类对象时，也会调用父类的构造函数
//// 子类和父类构造和析构顺序谁先谁后？
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数的调用" << endl;
//	}
//	~Base() 
//	{
//		cout << "Base析构函数的调用" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数的调用" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构函数的调用" << endl;
//	}
//};
//void test1()
//{
//	// 继承中的构造和析构顺序如下：
//	// 先构造父类，再构造子类，析构的顺序与构造的顺序相反
//	Son s1;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：继承中 先调用父类构造函数 再调用子类构造函数，析构与构造刚好相反

// 4.6.5 继承中同名成员的处理方式
// 问题：当子类与父类中出现重名的成员时，如何通过子类对象，访问到子类或父类中同名数据？
// 访问子类同名成员：直接访问即可
// 访问父类同名成员：需要加上作用域

//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func() 调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a) 调用" << endl;
//	}
//public:
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son - func() 调用" << endl;
//	}
//public:
//	int m_A;
//};
//// 同名成员属性的处理方式
//void test1()
//{
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	// 如果通过子类对象来访问父类中的同名成员，在同名成员后面加上父类的作用域
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//}
//// 同名成员函数的处理方式
//void test2()
//{
//	Son s;
//	s.func();// 直接调用 调用的是子类中的同名成员函数
//	// 如何调用父类中的同名成员函数？
//	s.Base::func();
//	// 如果子类中出现和父类同名的成员函数，子类的同名函数会隐藏掉父类中所有的同名成员函数
//	// 如果想要访问父类中被隐藏的同名成员函数，需要加上作用域
//	s.Base::func(100);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
// 总结：1. 访问子类中的同名成员函数直接进行访问
//		 2. 访问父类中的同名成员函数加上作用域即可
//       3. 子类中出现父类的同名函数成员，子类会将父类中所有的同名成员函数隐藏(其中就包括同名成员函数重载出来的函数),要想访问加上作用域即可

// 4.6.6 继承同名静态成员处理方式
// 静态成员和非静态成员出现同名，处理方式一致：
// 访问子类同名成员：直接访问
// 访问父类同名成员：加作用域

//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base  -  static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base  -  static void func(int a)" << endl;
//	}
//public:
//	static int m_A;
//// 复习静态成员变量的特点
//// 1. 在编译阶段就分配内存
//// 2. 所有对象共享同一份数据
//// 3. 类内声明，类外初始化
//};
//int Base::m_A = 100;
//class Son : public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son  -  static void func()" << endl;
//	}
//public:
//	static int m_A;
//};
//int Son::m_A = 200;
//// 同名静态成员变量
//void test1()
//{
//	// 访问静态成员有两种方法
//	// 1. 通过对象来访问
//	cout << "通过对象来访问" << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//	// 2. 通过类名来访问
//	cout << "通过类名来访问" << endl;
//
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	// 第一个::表示通过类名的方式来访问  第二个::表示访问在父类Base作用域下的m_A
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
//// 同名静态成员函数
//void test2()
//{
//	// 1. 通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	s.func(); // 访问子类下的静态成员函数
//	s.Base::func(); // 访问父类下的静态成员函数
//
//	// 2. 通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();// 访问子类下的静态成员函数
//	Son::Base::func();// 访问父类下的静态成员函数
//	// 如果子类中出现与父类同名的静态成员函数，也会将父类中所有的同名静态成员函数隐藏
//	// 如果想要访问父类中被隐藏的同名静态成员函数，加上作用域即可
//	Son::Base::func(100);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
// 总结：同名静态成员和同名非静态成员的处理方式是一致的，只不过有两种访问方式(通过对象 和 通过类名)

// 4.6.7 多继承语法
// C++允许一个类继承多个类
// 语法：class 子类 : 继承方式 父类1，继承方式 父类2
// 多继承可能会出现父类中同名成员的出现，需要加作用域区分
// C++在实际开发中不建议用多继承

//// 父类
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//public:
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//public:
//	int m_A;
//};
//// 子类 需要继承Base1和Base2
//// 语法：class 子类 : 继承方式 父类1，继承方式 父类2...
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//public:
//	int m_C;
//	int m_D;
//};
//void test1()
//{
//	Son s;
//	cout << "size of s = " << sizeof(s) << endl;
//	// 当父类中的成员出现同名时，应加上作用域作以区分
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
// 总结：多继承如果父类中成员出现同名，子类在使用时加上作用域来区分

// 4.6.8 菱形继承
// 菱形继承的概念：有两个派生类继承同一个基类，又有一个类同时继承着两个派生类，这种继承被称为菱形继承或者钻石继承。

// 动物类
class Animal 
{
public:
	int m_Age;
};
// 利用虚基类来解决菱形继承带来的问题
// 在继承方式前加上关键字 virtual 变为虚继承
// Animal类称为虚基类

// 羊类
class Sheep :virtual public Animal{};

// 驼类
class Tuo :virtual public Animal{};

// 羊驼类
class SheepTuo :public Sheep, public Tuo
{
	
};

void test1()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	// 当菱形继承，两个父类出现相同数据，则需要加以作用域作以区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	// 这份数据我们知到要一份就可以了，菱形继承导致有两份数据，资源浪费
}
int main()
{
	test1();
	return 0;
}
// 总结：1. 菱形继承带来的主要问题是子类继承了两份相同的数据，导致资源浪费以及毫无意义
//       2. 利用虚继承可以解决菱形继承带来的问题