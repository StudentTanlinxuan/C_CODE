///*3.9.3 map大小和交换
//* 作用：统计map容器的大小和交换map容器
//* 函数原型：
//* size(); // 返回容器中的元素个数
//* empty(); // 判断容器是否为空
//* swap(mp); // 交换两个集合容器
//*/
//
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//// 大小操作
//void test1()
//{
//	map<int, int> m;
//	
//	// 向m中插入数据，map中的数据都是成对存在的，所以插入时要使用对组pair
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为：" << m.size() << endl;
//	}
//}
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//// 交换操作
//void test2()
//{
//	map<int, int> m1;
//
//	// 向m中插入数据，map中的数据都是成对存在的，所以插入时要使用对组pair
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//
//	cout << "交换前：" << endl;
//	printMap(m1);
//	printMap(m2);
//
//	m1.swap(m2);
//	cout << "交换后：" << endl;
//	printMap(m1);
//	printMap(m2);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：size(); -- 统计大小
////		 empty(); -- 判断是否为空
////		 swap(); -- 交换容器