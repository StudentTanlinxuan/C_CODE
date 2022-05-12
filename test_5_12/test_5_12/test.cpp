#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
// 4.4 友元
// 在程序中，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
// 友元的目的就是让一个函数或者类访问另一个类中私有成员
// 友元的关键字：firend
// 友元的三种实现
// 全局函数做友元
// 类做友元
// 成员函数做友元

//// 4.4.1 全局函数做友元
//// 建筑物类
//class Building
//{
//	// GoodGay全局函数是Building的好朋友，可以访问Building类中的私有成员
//	friend void GoodGay(Building* building);
//public:
//	Building()
//	{
//		SittingRoom = "客厅";
//		BedRoom = "卧室";
//	}
//public:
//	string SittingRoom;// 客厅
//
//private:
//	string BedRoom;// 卧室
//};
//// 全局函数
//void GoodGay(Building* building)
//{
//	cout << "好基友全局函数 正在访问: " << building->SittingRoom << endl;
//
//	cout << "好基友全局函数 正在访问: " << building->BedRoom << endl;
//
//}
//void test1()
//{
//	Building building;
//	GoodGay(&building);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//// 4.4.2 类做友元
//class Buliding;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();// 参观函数 访问Building类中的属性
//public:
//	Buliding* buliding;
//};
//
//class Buliding
//{
//	// GoodGay是本类的一个好朋友，可以访问本类中的私有成员
//	friend class GoodGay;
//public:
//	Buliding();
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//Buliding::Buliding()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	// 创建一个建筑物对象
//	buliding = new Buliding;
//}
//
//void GoodGay::visit()
//{
//	cout << "好基友类正在访问：" << buliding->m_SittingRoom << endl;
//	cout << "好基友类正在访问：" << buliding->m_BedRoom << endl;
//}
//
//void test1()
//{
//	GoodGay goodgay;
//	goodgay.visit();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//// 4.4.3 成员函数做友元
//class Buliding;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();// 让visit成员函数可以访问Buliding类中的私有属性
//	void visit2();// 让visit成员函数不可以访问Buliding类中的私有属性
//public:
//	Buliding* buliding;
//};
//
//class Buliding
//{
//	// 告诉编译器，GoodGay这个类中的visit这个成员函数是本类的好朋友，可以访问本类的私有成员
//	friend void GoodGay::visit();
//public:
//	Buliding();
//
//public:
//	string m_SittingRoom; // 客厅
//
//private:
//	string m_BedRoom; // 卧室
//};
//
//Buliding::Buliding()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	buliding = new Buliding;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit 正在访问：" << buliding->m_SittingRoom << endl;
//	cout << "visit 正在访问：" << buliding->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2 正在访问：" << buliding->m_SittingRoom << endl;
//	//cout << "visit2 正在访问：" << buliding->m_BedRoom << endl;
//}
//void test1()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

// 4.5 运算符重载
// 运算符重载：对已经有的运算符重新进行定义，对其赋以另一种功能，以适应不同的数据类型

// 4.5.1 加号运算符重载
// 作用：实现两个自定义数据类型进行相加运算

class Person
{
public:
	// 1.使用成员函数进行+号运算符重载
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/

public:
	int m_A;
	int m_B;
};
// 2.使用全局函数进行+号运算符重载
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
// 函数重载的版本
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test1()
{
	Person p1;
	Person p2;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 10;
	p2.m_B = 10;
	// 成员函数对+号进行重载的本质调用
	//Person p3 = p1.operator+(p2);
	// 全局函数对+号进行重载的本质调用
	Person p3 = operator+(p1, p2);
	//Person p3 = p1 + p2;
	// 运算符重载也可以发生函数重载
	Person p4 = p1 + 100;// 相当于 Person + int

	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

int main()
{
	test1();
	return 0;
}

// 总结：1. 我们不能对内置的数据类型的表达式的运算符是不可发生改变的
//       2. 不能滥用运算符重载

// 对总结的自我理解：1.只能对自定义的数据类型进行重载，不能对已经有的数据类型的运算符进行重载(比如不能对int,float,double进行运算符重载)
//					 2.不能将写的 operator+这个内部实现两个Person相减