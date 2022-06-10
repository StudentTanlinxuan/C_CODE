//// 3.2.7 vector互换容器 
//// 作用：实现两个容器内元素互换
//// 函数原型：swap(vec); // 将vec与本身的元素互换
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// 1. 基本使用
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前： " << endl;
//	printVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后： " << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
//// 2. 实际用途
//// 巧用swap可以收缩内存空间
//void test2()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);// 重新指定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	// 巧用swap收缩内存
//	vector<int>(v).swap(v);// 利用匿名对象
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：swap可以使两个容器互换，可以达到使用的收缩内存效果