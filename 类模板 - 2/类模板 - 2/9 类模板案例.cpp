// 1.3.9 类模板案例
// 案例描述：实现一个通用的数组类，要求如下：
// 可以对内置的数据类型以及自定义数据类型的数据进行存储
// 将数组中的数据存储到堆区
// 构造函数中可以传入数组的容量
// 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
// 提供尾插法和尾删法对数组中的数据进行插入和删除
// 可以通过访问下标的方式访问数组中的元素
// 可以获取数组中当前元素个数和数组容量

#include<iostream>

using namespace std;

template<class T>
class myArray
{
public:
	myArray(int capacity)
	{

	}
private:
	// 数组的地址
	T* pAddress;
	// 数组容量
	int m_Capaticy;
	// 数组大小
	int m_Size;
};
