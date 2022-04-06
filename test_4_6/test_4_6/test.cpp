#include<iostream>
#include<string.h>
using namespace std;

// 类和对象
// c++中面向对象有三大特性：封装，继承，多态
// c++认为万事万物皆为对象，对象有其属性和行为

// 封装
// 封装的意义：
// 1.将属性和行为作为一个整体，表现生活中的事物
// 2.将属性和行为加以权限控制
// 封装意义一：在设计类时，将属性和行为写在一起，表示事物
// 语法：class 类名{ 访问权限：属性/行为 };

//const double PI = 3.14;
//// 圆周率
//// 设计一个圆，获取到它的周长
//// 周长的计算公式：2 * PI * 半径
//// 设计一个类
//// class表示设计一个类，类后面紧跟着的就是类名称
//class Circle
//{
//	// 访问权限
//	// public: - 公共权限
//public:
//
//	// 属性 -- 一般为变量
//	// 半径
//	int m_r;
//
//	// 行为 -- 一般为函数
//	// 获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	// 通过圆类，创建一个记得的圆(对象)
//	// 实例化（通过一个类 创建一个对象的过程）
//	Circle c1;
//	// 对圆对象 的属性赋值
//	c1.m_r = 10;
//	// c1的周长为62.8
//	cout << "c1的周长为：" << c1.calculateZC() << endl;
//	return EXIT_SUCCESS;
//}

//// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
//class student 
//{
//	// 权限
//public:// 公共权限
//	// 类中的属性和成员 我们统称为成员、
//	// 属性  成员属性  成员变量
//	// 行为  成员函数  成员方法
//	// 属性
//	string m_name;// 姓名
//	string m_number;// 学号
//	// 行为
//	// 给学生姓名赋值
//	 void SetName(string name)
//	{
//		 m_name = name;
//	}
//	 // 给学生学号赋值
//	 void SetNumber(string number)
//	 {
//		 m_number = number;
//	 }
//	 // 显示学生信息
//	 void ShowStudent()
//	 {
//		 cout << "name:" << m_name << "number:" << m_number << endl;
//	 }
//};
//
//int main()
//{
//	// 实例化一个具体对象
//	student stu1;
//	stu1.SetName("谈林轩");
//	stu1.SetNumber("2020050136");
//	stu1.ShowStudent();
//	return 0;
//}

//// 封装意义二：类在设计时，我们将属性和行为放在不同的权限下，加以控制
//// 有三个访问权限
//// 公共权限  public  成员 类内可以访问 类外也可以访问
//// 保护权限  protected  成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
//// 私有权限  private  成员 类内可以访问 类外不可以访问 儿子不可以访问父亲的私有内容
//class Person
//{
//public:// 公共权限
//	string m_name;// 名字
//protected:// 保护权限
//	string m_car;// 汽车
//private:// 私有权限
//	string m_password;// 银行卡密码
//public:
//	void func()
//	{
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_password = "123456";
//	}
//};
//int main()
//{
//	Person p1;
//	p1.m_name = "李四";
//	//p1.m_car = "奔驰";// 保护权限再类外不可以访问
//	//p1.m_password = "123";// 私有权限类外也不可以访问
//	return 0;
//}

// class和struct的区别
// 在c++中class和struct唯一的区别就是默认访问权限不同
// 区别：
// class的默认访问权限为私有 -- private  struct的默认访问权限为公共 -- public
class C1
{
	int m_a;// 默认权限  私有
};
struct C2
{
	int m_a;// 默认权限  公共
};
int main()
{
	C1 c1;
	//c1.m_a = 10;// 错误 默认权限私有
	C2 c2;
	c2.m_a = 10;// 正确  默认权限公共
	return 0;
}