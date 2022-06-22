//// 二元谓词
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		// 规则从大到小
//		return val1 > val2;
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	// 利用函数对象，改变算法策略，变为排序规则为从大到小
//	sort(v.begin(), v.end(), MyCompare());// MyCompare() 匿名对象
//	cout << "----------------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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
//// 总结：参数只有两个的谓词，称为二元谓词