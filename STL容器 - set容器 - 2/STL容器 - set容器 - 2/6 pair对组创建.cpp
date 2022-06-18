///*3.8.7 pair对组创建
//* 作用：成对出现的数据，利用对组可以返回两个数据
//* 两种创建方式：
//* pair<type, type> p (value1, value2);
//* pair<type, type> p = make_pair(value1, value2);
//*/
//
//
//#include<iostream>
//
//using namespace std;
//
//void test1()
//{
//	// 第一种使用方式
//	pair<string, int> p1("Tom", 20);
//	// 获取数据直接使用变量名 . 方式
//	cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;
//
//	// 第二种方式
//	pair<string, int> p2 = make_pair("Jerry", 30);
//	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}