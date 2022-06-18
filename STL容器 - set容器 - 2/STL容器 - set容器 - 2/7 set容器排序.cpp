/*3.8.8 set容器排序
* set默认排序规则是从小到大，掌握如何改变排序规则
* 利用仿函数，可以改变排序规则
*/


#include<iostream>
#include<set>
#include<string>

//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test1()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(20);
//	s1.insert(40);
//
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	// set容器要想改变排序规则 需要在插入数据前就要指定排序规则 默认为从小到大
//	set<int, MyCompare> s2;
//	
//
//	s2.insert(10);
//	s2.insert(30);
//	s2.insert(50);
//	s2.insert(20);
//	s2.insert(40);
//
//	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}


#include<iostream>
#include<set>
#include<string>
// set存放自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};
class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)
	{
		//按照年龄进行排序  降序
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	set<Person, comparePerson> s;

	Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
	}
}
int main() {

	test01();

	//system("pause");

	return 0;
}