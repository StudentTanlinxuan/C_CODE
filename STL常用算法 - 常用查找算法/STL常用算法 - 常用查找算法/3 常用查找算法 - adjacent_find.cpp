///*5.2.3 adjacent_find
//* 作用：查找相邻重复的元素
//* 函数原型：
//* adjacent(iterator beg, iterator end);
//* 查找相邻重复元素，返回相邻元素第一个位置的迭代器 没有找到返回结束迭代器
//* beg 开始迭代器
//* end 结束迭代器
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void test1()
//{
//	// 查找相邻重复元素
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{ 
//		cout << "没有找到相邻重复元素" << endl;
//	}
//	else
//	{
//		cout << "找到相邻重复元素：" << *pos << endl;
//	}
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：如果面试中问到查找相邻重复元素，记得STL中的adjacent_find算法