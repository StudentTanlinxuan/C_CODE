///*算法简介：
//* find -- 查找算法
//* find_if -- 按条件查找元素
//* adjacent_find -- 查找相邻重复元素
//* binary_search -- 二分查找算法
//* count -- 统计元素个数
//* count_if -- 按条件统计元素个数
//*/
//
///*5.2.1 find
//* 作用：查找指定元素，找到返回指定元素迭代器，没找到返回结束迭代器(end)
//* 函数原型：
//* find(iterator beg, iterator end, value);
//* 按值查找元素，找到返回该元素迭代器，找不到返回结束迭代器(end)
//* beg 开始迭代器
//* end 结束迭代器
//* value 查找的元素
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//// find 对内置数据类型
//void test1()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	// 查找容器中 是否有 5 这个元素
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "找不到" << endl;
//	}
//	else
//	{
//		cout << "找到：" << *it << endl;
//	}
//}
//
//// find 对自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	// 重载 == 底层find知道如何对比Person数据类型
//	/*bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}*/
//
//public:
//	string m_Name;
//	int m_Age;
//};
//void test2()
//{
//	vector<Person> v;
//	// 创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	Person pp("bbb", 20);
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到：" << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 利用find可以在容器中找指定元素，返回值是迭代器