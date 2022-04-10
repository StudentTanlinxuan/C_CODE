#include<iostream>

using namespace std;

//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person构造函数的调用" << endl;
//	//}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Persom拷贝函数的调用" << endl;
//	}
//	//Person(int age)
//	//{
//	//	cout << "Person有参构造函数调用" << endl;
//	//	m_Age = age;
//	//}
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//
//	int m_Age;
//};
//// 拷贝构造函数的调用时机
//// 1.使用已经实例化的对象来初始化另一个新对象
//void test1()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//// 2.使用值传递的方式给函数传值
//void doWork(Person p)
//{
//
//}
//void test2()
//{
//	Person p;
//	doWork(p);
//}
//// 3.以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << &p1 << endl;
//	return p1; 
//}
//void test3()
//{
//	Person p = doWork2();
//	cout << &p << endl;
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

// 构造函数调用规则
// 1.只要创建了一个类，C++编译器会给每个类增加至少三个函数
// 构造函数  (无参，空实现)
// 析构函数  (无参，空实现)
// 拷贝构造  (进行值拷贝)
//void test1()
//{
//	Person p1;
//	p1.m_Age = 18;
//	Person p2(p1);
//	cout << "p2的年龄为" << p2.m_Age << endl;
//}
//// 2.如果自己提供了有参构造，编译器不再为我们提供默认构造，但是还是会提供拷贝构造
//// 如果自己提供了拷贝构造函数，编译器不再提供其他普通构造函数
//void test2()
//{
//	Person p;
//	//Person p(28);
//	//Person p2(p);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// 深浅拷贝问题(面试经典问题)
// 浅拷贝：简单的复制拷贝操作
// 深拷贝：在堆区重新申请一块空间，进行拷贝操作
class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	~Person()
	{
		// 析构代码，将在堆区开辟的数据释放
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}
	// 要自己设计拷贝函数解决浅拷贝带来的问题 -- 利用深拷贝
	Person(const Person& p)
	{
		cout << "Person拷贝函数的调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;// 编译器就实现的是这行代码
		// 要用深拷贝来解决这个问题
		m_Height = new int(*p.m_Height);
	}
	Person(int age, int Height)
	{
		m_Age = age;
		m_Height = new int(Height);
		cout << "Person的有参函数调用" << endl;
	}

	int m_Age;// 年龄
	int* m_Height;// 身高
};
void test1()
{
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << " 身高为：" << *p2.m_Height << endl;
}
int main()
{
	test1();
	return 0;
}
// 总结：如果属性有在堆区开辟的，我们就需要自己设计拷贝构造函数来防止浅拷贝带来的问题