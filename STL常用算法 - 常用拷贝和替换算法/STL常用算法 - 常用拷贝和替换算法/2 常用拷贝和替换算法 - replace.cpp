///* 5.4.2 replace
//* 作用：将容器中指定范围内的旧元素修改为新元素
//* 函数原型：
//* replace(iterator beg, iterator end, oldvalue, newvalue);
//* 将区间内的旧元素换成新元素
//* beg		开始迭代器
//* end		结束迭代器
//* oldvalue  旧元素
//* newvalue  新元素
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
//	vector<int> v;
//
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	// 将容器中 20 替换为 2000
//	replace(v.begin(), v.end(), 20, 2000);
//	cout << "替换后：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：replace会替换区间内满足条件的所有元素