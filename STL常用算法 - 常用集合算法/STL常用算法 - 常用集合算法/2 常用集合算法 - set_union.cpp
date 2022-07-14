///*	5.6.2 set_union
//* 作用：求两个集合的并集
//* 函数原型：
//* set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//* 求两个集合的并集
//* 注意：两个集合必须是有序序列
//* beg1 容器1开始迭代器
//* end1 容器1结束迭代器
//* beg2 容器2开始迭代器
//* end2 容器2结束迭代器
//* dest 目标容器开始迭代器
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test1()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	// 提前给目标容器开辟空间
//	// 最特殊的情况 两个容器没有交集，并集就是两个容器size相加
//	vTarget.resize(v1.size() + v2.size());
//
//	// 获取并集
//	vector<int>:: iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	// 遍历目标容器
//	for_each(vTarget.begin(), itEnd, MyPrint());
//	cout << endl;
//
//	// 第二种遍历方式
//	for (vector<int>::iterator it = vTarget.begin(); it < itEnd; it++)
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
///* 总结：
//*		1. 求并集的两个容器必须是有序序列
//*		2. 在给目标容器开辟空间时，需要开辟两个容器大小相加
//*		3. set_union返回值既是交集中最后一个元素的位置
//*/