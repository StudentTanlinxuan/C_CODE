#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;
// 4.3 C++对象模型和this指针
// 4.3.1 成员变量和成员函数分开存储
// 在C++中类内的成员变量和成员函数是分开存储的
// 只有非静态成员变量才属于类的对象上

//class Person
//{
//public:
//
//	int m_A;// 定义了一个非静态成员变量  属于类的对象上
//
//	static int m_B; // 定义一个静态成员变量  不属于类的对象上
//
//	void func() {} // 非静态成员函数  不属于类的对象上
//
//	static void func2() {} // 静态成员函数  不属于类的对象上
//};
//int Person::m_B = 0;
//
//void test1()
//{
//	Person p;
//	// 空对象占用内存大小为：1个字节
//	// 因为C++编译器会对每一个空对象分配一个字节大小的空间，是为了区分空对象占用内存的位置
//	// 每一个空对象也应该有一个独一无二的内存地址
//	cout << "sizeof p = " << sizeof(p) << endl;
//}
//void test2()
//{
//	Person p;
//	// 输出结果为4
//	cout << "sizeof p = " << sizeof(p) << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// 4.3.2 this指针概念
// 成员变量和成员函数是分开存错的
// 非静态成员函数只诞生一份函数实例，也就是说多个同类型的对象共用一块代码
// 那么这一块代码是怎样区分哪个对象调用自己呢？？？
// C++通过特殊的对象指针，this指针来解决这个问题。
// this指针指向 被调用的成员函数 所属的对象（哪个对象调用成员函数则this指针就指向哪个对象）
// this指针是隐含于每一个非静态成员函数中的一个指针
// this不需要定于，直接进行使用即可

// this指针的用途
// 1.当形参和成员变量名重名时，可以用this指针来区分(解决名称冲突)
// 2.在类的非静态成员函数中返回对象自己，可使用return *this(返回本身用 *this)

//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(int age)
//	{
//		// this指针指向 被调用的成员函数 所属的对象(那个对象调用this就指向那个对象)
//		this->age = age;
//	}
//	Person& PersonageAdd(Person& p)// 这里必须使用引用的方式返回p2，因为只有这样才能保证一直是同一个p2。如果使用值传递的方式，返回的不是同一个p2，因为会调用拷贝构造函数，会返回一个新创建的对象
//	{
//		this->age += p.age;
//		// 此时this指向p2的指针，而*this就是指向p2这个对象本体
//		return *this;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	int age;
//};
//// 1.解决名称冲突问题
//void test1()
//{
//	Person p(18);
//	cout << "p的年龄为：" << p.age << endl;
//}
//// 2.返回本身使用* this
//void test2()
//{
//	Person p1(10);
//
//	Person p2(10);
//	// 链式编程思想
//	p2.PersonageAdd(p1).PersonageAdd(p1).PersonageAdd(p1);
//
//	cout << "p2的年龄是：" << p2.age << endl;
//}
//
//// 复习一下拷贝构造函数的调用时机
//// 1.使用一个已经创建的对象来初始化一个新对象
//// 2.以值传递来传递给函数参数传值
//// 3.以值方式返回局部对象
//
//// 1.使用一个已经创建的对象来初始化一个新对象
//void test5()
//{
//	Person p5(18);
//	cout << "p5的年龄为：" << p5.age << endl;
//	Person p6 = p5;
//	cout << "p6的年龄为：" << p6.age << endl;
//}
//// 3.以值方式返回局部对象
//Person doWork2()
//{
//	Person p3;
//	cout << (int*)&p3 << endl;
//	return p3;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//// 2.以值传递来传递给函数参数传值
//void test4()
//{
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test03();
//	//test4();
//	test5();
//	return EXIT_SUCCESS;
//}

// 4.3.3 空指针访问成员函数
// C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
// 如果用到this指针，需要加以判断保证代码的健壮性

//class Person
//{
//public:
//
//	void showPersonName()
//	{
//		cout << "this is Person " << endl;
//	}
//
//	void showPersonAge()
//	{
//		// 引发异常的原因是因为传入的指针为NULL 
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << this->m_Age << endl;
//	}
//	
//	int m_Age;
//};
//
//void test1()
//{
//	Person* p = NULL;
//	p->showPersonName();
//	p->showPersonAge();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

// 4.3.4 const修饰成员函数
// 常函数
// 成员函数后面加上const关键字称这个函数为常函数
// 常函数不可以修改成员属性
// 成员属性声明时加上关键字mutable后，常函数中依然可以修改
// 常对象
// 声明对象前加上const称该对象为常对象
// 常对象只能调用常函数

// 常函数
class Person
{
public:
	// this指针的本质是一个指针常量  指针的指向不可以发生修改
	// const Person* const this; 前面的const让this指向的值不可以修改，后面的const让this的指向不可以修改
	// 在成员函数后面加上const，修饰的是this的指针，让指针指向的值也不可以修改
	void showPerson()const
	{
		this->m_B = 100;
		//this->m_A = 10;
		//this = NULL; // this指针不可以修改指针的指向
	}
	void func()
	{

	}
	int m_A;
	mutable int m_B;// 特殊的变量，即使在常函数中，也可以修改这个值,加上关键字mutable
};

void test1()
{
	Person p;
	p.showPerson();
}
// 常对象
void test2()
{
	const Person p;// 在对象前加上const，变为常对象
	//p.m_A = 10;
	p.m_B = 10;// m_B也是一个特殊的值，在常对象下也可以修改
	// 常对象只能调用常函数
	p.showPerson();
	// p.func(); // 常对象不可以调用普通的成员函数，因为普通的成员函数可以修改属性。而常对象不可以修改成员属性，如果可以调用普通成员函数则侧面表示可以修改成员属性
}
int main()
{
	test1();
	return 0;
}