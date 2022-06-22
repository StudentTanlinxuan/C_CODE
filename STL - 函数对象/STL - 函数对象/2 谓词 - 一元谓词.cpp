///* 4.2 谓词
//* 4.2.1 谓词基本概念
//* 概念：返回布尔类型的仿函数称为谓词
//*		如果operator()接受一个参数，那么叫做一元谓词
//*		如果operator()接受两个参数，那么叫做二元谓词
//*/
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
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
//	// 查找容器中是否有大于五的数
//	// GreaterFive() 匿名函数对象
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到大于5的数字为：" << *it << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：参数只有一个的谓词，称为一元谓词