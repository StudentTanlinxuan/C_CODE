//// 3.2.6 vector数据存取
//// 作用：对vector容器中的数据进行存取操作
//// 函数原型：at(int idx); // 返回索引idx所指的数据
//// operator[]; // 返回索引idx所指的数据
//// front(); // 返回容器中第一个数据元素 
//// back(); // 返回容器中最后一个数据元素
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	// 遍历 利用[]方式来访问容器中内容
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	
//	// 利用at方式来访问容器中内容
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	// 获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	// 获取最后一个元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：除了利用迭代器的方式访问容器中的内容，[]和at也可以访问
//// front(); 获取容器中第一个元素
//// back(); 获取容器中最后一个元素