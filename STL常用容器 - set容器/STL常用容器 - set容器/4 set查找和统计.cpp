/*
* 3.8.5 set查找和统计
* 作用：对set容器进行查找数据以及统计数据
* 函数原型：
* find(key); // 查找容器是否有key，若存在返回该建的元素迭代器；若不存在，返回set.end()
* count(key); // 统计key的元素个数
*/

#include<iostream>
#include<set>

using namespace std;

// 查找
void test1()
{
	set<int> s1;

	// 插入数据
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}

// 统计
void test2()
{
	set<int> s1;

	// 插入数据
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	// 统计30的个数
	int num = s1.count(3900);
	// 对于set容器而言 统计结果要么是1 要么是0
	cout << "num = " << num << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}
// 总结：find(); -- 查找(返回的是迭代器)
//		 count(); -- 统计(对于set来说，结果为0或1)