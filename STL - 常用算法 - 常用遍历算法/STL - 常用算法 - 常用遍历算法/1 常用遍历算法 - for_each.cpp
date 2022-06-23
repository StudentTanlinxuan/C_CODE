///*5.1 常用遍历算法
//* for_each // 遍历容器
//* transform // 搬运容器到另一个容器
//* 5.1.1 for_each
//* 作用：实现遍历容器
//* 函数原型：
//* for_each(iterator beg, iterator end, _func);
//* 遍历算法 遍历容器元素
//* beg 开始迭代器
//* end 结束迭代器
//* _func 函数或函数对象
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void print1(int val)
//{
//	cout << val << " ";
//}
//
//class Print
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
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	// 普通函数实现
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//
//	// 仿函数(函数对象)实现
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：for_each在实际开发中是最常用遍历算法，需熟练掌握