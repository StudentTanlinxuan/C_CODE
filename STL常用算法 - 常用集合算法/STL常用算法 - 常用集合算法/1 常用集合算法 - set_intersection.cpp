///* 5.6 常用集合算法
//* 算法简介：
//* set_intersection		求两个容器的交集
//* set_union				求两个容器的并集
//* set_difference		求两个容器的差集
//*/
//
///* 5.6.1 set_intersection
//* 作用：求两个容器的交集
//* 函数原型：set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//* 求两个容器的交集
//* 注意：两个容器必须是有序序列
//* beg1容器1开始迭代器
//* end1容器1结束迭代器
//* beg2容器2开始迭代器
//* end2容器2结束迭代器
//* dest目标容器开始迭代器
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
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
//		v1.push_back(i); // 0 ~ 9
//		v2.push_back(i + 5); // 5 ~ 14
//	}
//
//	vector<int> vTarget;
//	// 目标容器需要提前开辟空间
//	// 最特殊的情况，大容器中包含小容器，开辟空间内存 取小容器的size即可
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	// 获取交集
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	// 注意：set_intersection返回的是两个容器中交集的最后一个元素的位置
//
//	for_each(vTarget.begin(), itEnd, MyPrint()); 
//	// 注意此处的结束迭代器要用set_intersection返回的迭代器
//	// 因为重新指定大小时，考虑到的是最坏情况
//	cout << endl;
//
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
//
///* 总结：
//*		1. 源容器中的两个容器必须是有序序列
//*		2. 在给目标容器开辟空间时，需要取两个容器中最小的容器大小
//*		3. set_intersection的返回值既是交集中的最后一个元素位置   所以在遍历时要用返回的这个迭代器
//*/