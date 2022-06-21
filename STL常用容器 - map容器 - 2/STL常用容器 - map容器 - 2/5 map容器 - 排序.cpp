///*3.9.6 map容器排序
//* 作用：map容器默认排序规则为 按照key值的进行从大到小排序，掌握如何改变排序规则
//* 
//* 利用仿函数，可以改变排序规则
//*/
//
//
//#include<iostream>
//#include<map>
//#include<string>
//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		// 降序
//		return v1 > v2;// 只需要让第一个数大于第二个数即可，升序反之
//	}
//};
//
//// 利用仿函数改变map容器 存放内置数据类型 的排序规则
//void test1()
//{
//	map<int, int, MyCompare> m;
//	// map默认排序是根据key的值从小到大排序，要想改变排序规则，可以利用仿函数，而且要在插入数据前就指定
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(5, 50)); // map容器插入数据时会自动排序
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//
//	// 迭代器也要指定排序规则
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//
//}
//
//// 利用仿函数改变map容器 存放自定义数据类型 的排序规则
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//class PersonCompare
//{
//public:
//	bool operator()(Person p1, Person p2)const // 此处不加const会出现C3848错误
//		// 注意：参数部分Person p1不能写成 Person& p1
//	{
//		// 降序
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test2()
//{
//	map<Person, int, PersonCompare> m;
//
//	Person p1("刘备", 55);
//	Person p2("关羽", 50);
//	Person p3("张飞", 40);
//	Person p4("诸葛亮", 60);
//
//	m.insert(make_pair(p1, 10));
//	m.insert(make_pair(p2, 20));
//	m.insert(make_pair(p3, 30));
//	m.insert(make_pair(p4, 40));
//
//	for (map<Person, int, PersonCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "姓名：" << it->first.m_Name << " 年龄：" << it->first.m_Age << " value = " << it->second << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：利用仿函数可以指定map容器的排序规则
////		 对于自定义数据类型，map必须要指定排序规则，同set容器
//
//
//
////// C3848.cpp
////void glbFunc1()
////{
////}
////
////typedef void (*pFunc1)();
////
////struct S3
////{
////    operator pFunc1() const
////    {
////        return &glbFunc1;
////    }
////};
////
////int main()
////{
////    const S3 s3;
////    s3();   // C3848, uncomment const qualifier -- 取消注释 const 限定符 就会出现C3848错误
////}