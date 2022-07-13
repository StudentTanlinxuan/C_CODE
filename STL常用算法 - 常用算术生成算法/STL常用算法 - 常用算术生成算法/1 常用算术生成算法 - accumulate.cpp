///* 5.5 常用算术生成算法
//* 注意：算术生成算法属于小型算法，使用时包含的头文件为#include<numeric>
//* 算法简介：
//* accumulate	计算容器元素累计总和
//* fill			向容器中添加元素
//*/
//
///* 5.5.1 accumulate
//* 作用：计算容器内 容器元素累计总和
//* 函数原型：
//* accmumlate(iterator beg, iterator end, value);
//* 计算容器中元素累计总和
//* beg		开始迭代器
//* end		结束迭代器
//* value     起始累加值
//*/
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<numeric>
//
//using namespace std;
//
//void test1()
//{
//	vector<int> v;
//
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	// 参数3是一个 起始累加值
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：accumulate使用时头文件注意是numeric,这个算法很实用