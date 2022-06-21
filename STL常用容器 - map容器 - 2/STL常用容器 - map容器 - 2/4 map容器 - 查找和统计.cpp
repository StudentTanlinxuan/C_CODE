///*3.9.5 查找和统计
//* 作用：对map容器进行查找数据以及统计数据
//* 函数原型：
//* find(key); // 查找key值是否存在，若存在，则返回该键的迭代器，若不存在，则返回map.end()
//* count(key); // 统计key的元素个数
//*/
//
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(make_pair(3, 30));
//	//m.insert(make_pair(3, 40));
//	// 查找
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "找到元素：" << "key = " << pos->first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	// 统计
//	// map容器不能插入重复的key 元素，count统计而言，结果要么是0，要么是1
//	// multimap容器count统计可能大于1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//void printMultimap(multimap<int, int>& m)
//{
//	for (multimap<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test2()
//{
//	multimap<int, int> m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(3, 20));
//
//	printMultimap(m);
//
//	//m.erase(3);
//	//printMultimap(m);
//
//	multimap<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "找到元素：" << "key = " << pos->first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：find() -- 返回的是一个迭代器，如果不存在返回end()迭代器
////       count() -- 对于map容器来说结果只能是0或1
//
//
//
//
//
//
//
//
////int main()
////{
////
////	int arr[5] = { 1,4,5,6,7 };
////
////	// 冒泡排序
////	/*for (int i = 0; i < 5 - 1; i++)
////	{
////		for (int j = 0; j < 5 - i - 1; j++)
////		{
////			if (arr[j] < arr[j + 1])
////			{
////				arr[j] ^= arr[j + 1];
////				arr[j + 1] ^= arr[j];
////				arr[j] ^= arr[j + 1];
////			}
////		}
////	}*/
////
////	// 选择排序
////	int max = 0;
////	for (int i = 0; i < 5; i++)
////	{
////		max = i;
////		for (int j = i; j < 5; j++)
////		{
////			if (arr[j] > arr[max])
////			{
////				arr[j] ^= arr[max];
////				arr[max] ^= arr[j];
////				arr[j] ^= arr[max];
////			}
////		}
////		//max++;
////	}
////
////	for (int i = 0; i < 5; i++)
////	{
////		cout << arr[i] << " ";
////	}
////	cout << endl;
////
////	return 0;
////}