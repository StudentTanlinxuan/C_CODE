///*3.9.2 map构造和赋值
//* 
//* 3.9.1 map基本概念
//
//**简介：**
//
//* 1. map中所有元素都是pair
//* 2. pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
//* 3. 所有元素都会根据元素的键值自动排序
//* 
//* 作用：对map容器进行构造和赋值
//* 函数原型：
//* 构造：
//* map<T1, T2> mp; // map默认构造函数
//* map(const map& mp); // 拷贝构造
//* 赋值：
//* map& operator=(const map& mp); // 重载等号运算符
//*/
//
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	// 创建map容器
//	map<int, int> m;
//
//	// 插入数据时，会自动以key的值排序
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(3, 30));
//
//	printMap(m);
//
//	// 拷贝构造
//	map<int, int> m2(m);
//	printMap(m2);
//
//	// 赋值
//	map<int, int> m3;
//	m3 = m2;
//	printMap(m3);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：map容器中的所有数据都是成对存在的，插入数据时要使用对组