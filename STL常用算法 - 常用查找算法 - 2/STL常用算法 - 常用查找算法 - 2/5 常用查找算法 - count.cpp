///*5.2.5 count
//* 作用：统计元素个数
//* 函数原型：
//* count(iterator beg, iterator end, value);
//* 统计元素出现的次数
//* beg 开始迭代器
//* end 结束迭代器
//* value 统计的元素
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
//// 1、内置数据类型
//void test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(30);
//
//	int num = count(v.begin(), v.end(), 40);
//	cout << "40的个数为：" << num << endl;
//}
//
//// 2、对自定义数据类型
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void test2()
//{
//	vector<Person> v;
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("诸葛亮", 35);
//	// 统计与诸葛亮同岁的人的个数
//	int num = count(v.begin(), v.end(), p);
//	cout << "与诸葛亮同岁数的人的个数为：" << num << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：在统计自定义数据类型时，需要配合重载operator==来使用