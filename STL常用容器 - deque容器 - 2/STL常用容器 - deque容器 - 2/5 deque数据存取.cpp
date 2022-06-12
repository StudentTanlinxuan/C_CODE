//// 3.3.6 deque数据存取
//// 作用：对deque容器中数据进行存取操作
//// 函数原型：
//// at(int idex); // 返回索引idex所指的数据
//// operator[]; // 返回索引idex所指的数据 
//// front(); // 返回容器中第一个的数据元素
//// back(); // 返回容器中最后一个的数据元素
//
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//void test1()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	// 通过[]方式访问元素
//	// 300 200 100 10 20 30
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	// 通过at方式访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "d1的第一个元素为：" << d1.front() << endl;
//	cout << "d1的最后一个元素为：" << d1.back() << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：除了使用迭代器方式访问容器中元素，[]和at方式也可以
////		 front(); // 返回容器中第一个元素
////		 back(); // 返回容器中最后一个元素
//// 