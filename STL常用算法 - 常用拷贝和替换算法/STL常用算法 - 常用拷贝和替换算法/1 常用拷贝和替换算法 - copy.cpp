///* 5.4 常用拷贝和替换算法
//* 算法简介：
//* copy			容器内指定范围的元素拷贝到另一容器中
//* replace			将容器内指定范围的旧元素修改为新元素
//* replace_if		容器内指定范围满足条件的元素替换为新元素
//* swap			互换两个容器的元素
//*/
//
///* 5.4.1 copy
//* 作用：将容器内指定范围的元素拷贝到另个容器中
//* 函数原型：
//* copy(iterator beg, iterator end, iterator dest);
//* beg		开始迭代器
//* end		结束迭代器
//* dest		目标容器起始迭代器
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	// 必须给目标容器提前开辟内存空间
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：在使用copy算法时，目标容器记得提前开辟空间