#include<iostream>

using namespace std;
// 1.2.6 模板的局限性
// 局限性：
// 模板的通用性并不是万能的
// 有些特定数据类型，需要用具体化方法做具体实现

// 创建一个人类
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
public:
	// 姓名
	string m_name;
	// 年龄
	int m_age;
};

// 对比两个数据是否相等函数
template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// 利用具体化Person的版本实现代码，具体化优先调用
// 具体化模板前面加上template<>
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test1()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
void test2()
{
	Person p1("Tom", 20);
	Person p2("Tom", 10);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main()
{
	//test1();
	test2();
	return 0;
}
// 总结：利用具体化模板，可以解决自定义类型的通用化
//       学习模板并不是为了写模板，而是再STL能够运用系统提供的模板