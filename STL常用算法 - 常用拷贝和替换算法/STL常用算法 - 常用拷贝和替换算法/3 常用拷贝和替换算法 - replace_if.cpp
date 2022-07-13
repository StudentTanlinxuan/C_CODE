///* 5.4.3 replace_if
//* 作用：将容器中指定范围内满足条件的旧元素替换为新元素
//* 函数原型：
//* replace_if(iterator beg, iterator end, _Pred, newvalue);
//* 按条件替换元素，满足条件的替换成指定元素
//* beg			开始迭代器
//* end			结束迭代器
//* _Pred			谓词
//* newvalue		替换的新元素
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
//class Greater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(10);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	// 将容器中的元素 大于等于 30 的元素替换成 3000
//	replace_if(v.begin(), v.end(), Greater30(), 3000);
//	cout << "替换后：" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：replace_if按条件替换，可以利用仿函数灵活筛选满足的条件