#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
// 4.5.4 赋值运算符重载
// C++编译器至少会给一个类添加4个函数
// 1.默认构造函数(无参，函数体为空)
// 2.默认析构函数(无参，函数体为空)
// 3.默认拷贝构造函数，对属性进行值拷贝
// 4.赋值运算符operator=,对属性进行值拷贝

// 如果类中有属性是指向堆区的，进行值拷贝时也会出现深浅拷贝问题
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	// 重载 赋值 运算符
//	Person& operator=(Person& p)
//	{
//		// 编译器提供的时浅拷贝
//		//m_Age = p.m_Age;
//		
//		// 先判断是否有属性是指向堆区的，如果有则先释放干净，然后再进行深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		// 再进行深拷贝
//		m_Age = new int(*p.m_Age);
//		// 返回对象本身
//		return *this;
//		// 如果返回值用值方式返回则会调用默认拷贝构造函数重新创建新对象返回，返回的就不是对象本身
//	}
//public:
//	int* m_Age;
//};
//void test1()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1;// 赋值操作
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//int main()
//{
//	test1();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//c = b = a;// 可以进行连等
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "c = " << c << endl;
//	return 0;
//}

// 4.5.5 关系运算符重载
// 作用：重载关系运算符，可以实现两个自定义数据对象进行比对操作
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return false;
//		}
//		return true;
//	}
//public:
//	string m_Name;
//
//	int m_Age;
//
//};
//void test1()
//{
//	Person p1("Tom", 18);
//
//	Person p2("Tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1 和 p2 相等" << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2 不相等" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "p1 和 p2 不相等" << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2 相等" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}

// 4.5.6 函数调用运算符重载
// 函数调用运算符()也可以重载
// 由于重载后的使用方式非常像函数调用，因此称为仿函数
// 仿函数没有固定写法，非常灵活

// // 打印输出类
//class MyPrint
//{
//public:
//	// 函数调用运算符重载
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//void MyPrint2(string test)
//{
//	cout << test << endl;
//}
//void test1()
//{
//	MyPrint myprint;
//	myprint("hello world");// 由于使用起来非常类似于函数调用，所以称其为仿函数
//
//	MyPrint2("hello world");
//}
//// 仿函数使用起来非常的灵活，没有一个固定的写法 
//// 加法类
//class MyAdd
//{
//public:
//	// 函数调用运算符重载
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//void test2()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//	// 匿名函数对象
//	cout << MyAdd()(100, 100) << endl;// MyAdd()这是一个匿名对象  匿名对象有个特点：执行完这行后立即释放
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// 4.6 继承
// 4.6.1 继承的基本语法

//// 普通实现页面
//// Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()// content  内容
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//// Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//// C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()// content  内容
//	{
//		cout << "C++学科视频" << endl;
//	}
//};

//// 使用继承来实现页面
//// 公共页面类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//};
//
//// 继承的好处：减少代码重复
//// 继承的语法：class 子类 : 继承方式 父类
//// class A : public B
//// A类称为子类  也称为  派生类
//// B类称为父类  也称为  基类
//// 派生类的成员包括两大部分：
//// 一类是从基类继承来的，一类是自己增加的成员
//// 从基类继承过来的表现其共类，自己新增加的成员表现其个性。
//
//// Java页面
//class Java : public BasePage// 继承BasePage类,使类内的public中成员函数在此展开
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//// Python页面 
//class Python : public BasePage // 继承BasePage类
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//// C++页面
//class CPP : public BasePage// 继承BasePage类
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test1()
//{
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.left();
//	ja.content();
//	ja.footer();
//
//	cout << "------------------------------" << endl;
//	cout << "Python下载视频页面如下：" << endl;
//	Python py;
//	py.header();
//	py.left();
//	py.content();
//	py.footer();
//
//	cout << "------------------------------" << endl;
//	cout << "C++下载视频页面如下：" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.left();
//	cpp.content();
//	cpp.footer();
//}
//int main()
//{
//	test1();
//	return 0;
//}

// 4.6.2 继承方式
// 继承的语法：class 子类 : 继承方式  父类
// 继承方式一共有三种：
// 公共继承
// 保护继承
// 私有继承

// 公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10; // 父类中的公共权限成员 到子类中依然是公共权限
		m_B = 20; // 父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 30; // error 父类中的私有成员  子类中是访问不到的
	}
};
void test1()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100; // error 因为m_B在Son1中是保护权限  因此在类外访问不到
}
// 保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 100;// 父类中的公共权限的成员 到子类中变为保护权限
		m_B = 100;// 父类中的保护权限的成员 到子类依然是保护权限
		//m_C = 100;// error 父类中的私有成员 子类是访问不到的
	}
};
void test2()
{
	Son2 son1;
	//son1.m_A = 100;// error  因为 m_A 在子类Son2中变成保护权限  因此在类外访问不到
	//son1.m_B = 100;// error  m_B 在子类Son2中依然是保护权限  类外也访问不到
}
// 私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 1000; // 父类中的公共权限成员  到子类中变为 私有权限
		m_B = 1000; // 父类中的保护权限成员  到子类中变为 私有权限
		//m_C = 1000; // error 父类中的私有成员  子类访问不到 
	}
};
class GradeSon3 : public Son3
{
public:
	void func()
	{
		//m_A = 200; // error  m_A到类Son3中变为 私有权限 即使是儿子 也访问不到
		//m_B = 200; // error  m_B到类Son3中变为 私有权限 即使是儿子 也访问不到
	}
};
void test3()
{
	Son3 son3;
	//son3.m_A = 100; // error  父类中的m_A到子类Son3中变为 私有权限 类外访问不到
	//son3.m_B = 100;  // error  父类中的m_B到子类Son3中变为 私有权限 类外访问不到
}