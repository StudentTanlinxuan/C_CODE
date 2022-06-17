///*3.8.3 set大小和交换
//*作用：统计set容器大小以及交换set容器
//* 函数原型：
//* size(); // 返回容器中元素的数目
//* empty(); // 判断容器是否为空
//* swap(); // 交换两个集合容器
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void printSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// 大小
//void test1()
//{
//	set<int> s1;
//	// 插入数据
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//
//	// 打印容器
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为：" << s1.size() << endl;
//	}
//}
//
//// 交换
//void test2()
//{
//	set<int> s1;
//	// 插入数据
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	set<int> s2;
//	// 插入数据
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	cout << "交换前：" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "交换后：" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：统计大小 -- size();
////		 判断是否为空 -- empty();
////		 交换 -- swap();