///*3.8.6 set和multiset区别
//* 区别：
//* 1. set不可以插入重复的元素，而multiset可以
//* 2. set在插入数据的同时会返回插入结果，表示插入是否成功
//* 3. multiset不会检测数据，因此可以插入重复数据
//*/
//
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void test1()
//{
//	set<int> s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int> ms;
//	// multiset允许插入重复值
//	ms.insert(10);
//	ms.insert(10);
//
//	// 遍历
//	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
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
//// 总结：如果不允许插入重复数据可以利用set
////		 如果允许插入重复数据可以利用multiset