// 1.3.4 类模板对象做函数参数
// 学习目标：类模板实例化出的对象，向函数传参的方式

// 一共有三种传入方式：
// 1. 指定传入的类型 -- 直接显示对象的数据类型
// 2. 参数模板化 -- 将对象中的参数变为模板进行传递
// 3. 整个类模板化 -- 将这个对象类型 模板化进行传递

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	}
public:
	T1 m_Name;
	T2 m_Age;
};
// 1. 指定传入类型
void printPerson1(Person<string, int>&p)
{
	p.showPerson();
}
void test1()
{
	Person<string, int>p("孙悟空", 100);
	printPerson1(p);
}
// 2. 参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	// 查看T的数据类型
	cout << "T1的数据类型：" << typeid(T1).name() << endl;
	cout << "T2的数据类型：" << typeid(T2).name() << endl;
}
void test2()
{
	Person<string, int>p("猪八戒", 90);
	printPerson2(p);
}

// 3. 整个类模板化
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}
void test3()
{
	Person<string, int>p("唐僧", 30);
	printPerson3(p);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
// 总结；通过类模板创建的对象，可以有三种方式向函数中进行传参
//		 使用比较广泛的是第一种：指定传入的类型