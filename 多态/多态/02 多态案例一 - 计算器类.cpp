#include<iostream>
#include<string>

using namespace std;
// 4.7.2 多态案例一 - 计算机
// 案例描述：分别利用多态技术和普通写法，实现两个数进行运算的计算器类
// 多态的优点：1.代码组织结构清晰  2.可读性强  3.利于前期和后期的扩展以及维护

// 普通实现
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}
	// 如果想扩展新的功能，需要修改源码
	// 在真实开发中，提倡 开闭原则
	// 开闭原则：对扩展进行开放，对修改进行关闭
public:
	int m_Num1;// 操作数1
	int m_Num2;// 操作数2
};
void test1()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;

	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;

}

// 利用多态来实现计算器
// 多态的好处：
// 1. 组织结构强
// 2. 可读性强
// 3. 对于前期和后期扩展以及维护性高

// 实现计算器抽象类
class AbstractCalaulator
{
public:
	virtual int getResult()
	{
		return 0;
	}
public:
	int m_Num1;
	int m_Num2;
};
// 加法计算器类
class AddCalaulator :public AbstractCalaulator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
// 减法计算器类
class SubCalaulator :public AbstractCalaulator // subtraction 减法
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
// 乘法计算器类
class MulCalaulator :public AbstractCalaulator 
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test2()
{
	// 多态的使用：父类的指针或者引用指向子类对象
	// 加法运算
	AbstractCalaulator* abs = new AddCalaulator;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " + " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

	// 减法运算
	abs = new SubCalaulator;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " - " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

	// 乘法运算
	abs = new MulCalaulator;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " * " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

}
int main()
{
	//test1();
	test2();
	return 0;
}
// 总结：C++开发提倡利用多态设计程序架构，因为多态优点很多