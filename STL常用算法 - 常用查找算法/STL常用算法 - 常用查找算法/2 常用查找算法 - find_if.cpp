///*5.2.2 find_if
//* 作用：按条件查找元素
//* 函数原型：
//* find_if(iterator beg, iterator end, _Pred);
//* 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//* beg 开始迭代器
//* end 结束迭代器
//* _Pred 函数或者谓词(返回bool类型的仿函数)
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
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//bool GreaterFive2(int val)
//{
//	return val > 5;
//}
//
//// 查找内置数据类型
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive()); // 函数和仿函数都可以
//
//	if (it == v.end())
//	{
//		cout << "找不到" << endl;
//	}
//	else
//	{
//		cout << "找到： " << *it << endl;
//	}
//}
//
//// 查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class Greater20
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 20;
//	}
//};
//
//bool myGreater20(Person& p)
//{
//	return p.m_Age > 20;
//}
//
//void test2()
//{
//	vector<Person> v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	// 查找年龄大于20的人
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), myGreater20);
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：" << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//		//for (;it != v.end(); it++)
//		//{
//		//	cout << "找到了：" << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//
//		//}
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}