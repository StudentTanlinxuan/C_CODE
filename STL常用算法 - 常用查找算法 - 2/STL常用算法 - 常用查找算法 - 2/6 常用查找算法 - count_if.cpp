/*5.2.6 count_if
* 作用：按条件统计元素个数
* 函数原型：
* count_if(iterator beg, iterator end, _Pred);
* 按条件统计元素出现的次数
* beg 开始迭代器
* end 结束迭代器
* _Pred 谓词
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

// 统计内置数据类型

class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;// 如果元素大于20返回true
	}
};

void test1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	// 统计大于20的元素个数
	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "大于20的元素个数为： " << num << endl;
}

// 统计自定义数据类型

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

class AgeGreate20
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};

void test2()
{
	vector<Person> v;
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 20);
	Person p5("曹操", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeGreate20());
	cout << "年龄大于20的人数：" << num << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}