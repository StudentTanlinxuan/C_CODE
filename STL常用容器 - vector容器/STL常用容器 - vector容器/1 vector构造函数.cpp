//// 3.2.2 vector构造函数
//// 作用：创建vector容器
//// 函数原型：vector<T> v;// 采用模板实现类实现，默认构造函数
//// vector(v.begin(), v.end());// 将v[begin(),end())区间中的元素拷贝给本身
//// vector(n, elem);// 构造函数将n个elem拷贝给本身
//// vector(const vector& vec);// 拷贝构造函数
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void vectorPrint(vector<int>& v)
//{
//	// 利用迭代器vector<int>::iterator
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//
//void test1()
//{
//	vector<int> v1;// 默认构造  无参构造
//
//	for (int i = 0; i < 10; i++)
//	{
//		// 向v1中尾插10个元素
//		v1.push_back(i);
//	}
//
//	// 打印一下v1
//	vectorPrint(v1);
//
//	// 利用区间方式进行构造
//	vector<int> v2(v1.begin(), v1.end());
//	vectorPrint(v2);
//
//	// n个elem方式构造
//	vector<int> v3(10, 100);// 参数1：个数  参数2：elem值
//	vectorPrint(v3);
//
//	// 利用拷贝构造函数
//	vector<int> v4(v3);
//	vectorPrint(v4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：vector的多种构造方式没有可比性，灵活运用即可