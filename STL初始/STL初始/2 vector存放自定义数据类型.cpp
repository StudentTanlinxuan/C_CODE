//// 2.5.2 vector存放自定义数据类型
//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
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
//// 存放Person数据
//void test1()
//{
//	// 创建一个v容器
//	vector<Person> v;
//
//	Person p1("刘备", 40);
//	Person p2("关羽", 30);
//	Person p3("诸葛亮", 20);
//	Person p4("刘邦", 10);
//	Person p5("典韦", 50);
//	// 向容器中插入数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	// 遍历容器
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//		cout << "姓名 " << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
//	}
//
//	//Person* pp = &p1;
//	//cout << ( * pp).m_Name << endl;
//	//cout << pp->m_Age << endl;// 指针可以直接通过->来访问到p1中的内容
//
//}
//
//// 存放Person* 数据
//void test2()
//{
//	// 创建一个v容器
//	vector<Person*> v;
//
//	Person p1("刘备", 40);
//	Person p2("关羽", 30);
//	Person p3("诸葛亮", 20);
//	Person p4("刘邦", 10);
//	Person p5("典韦", 50);
//	// 向容器中插入数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	// 遍历
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << ( * (*it)).m_Name << " 年龄：" << ( * (*it)).m_Age << endl;
//		cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}