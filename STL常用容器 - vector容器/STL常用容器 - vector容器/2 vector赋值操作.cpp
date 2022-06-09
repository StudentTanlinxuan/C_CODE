//// 3.2.3 vector赋值操作
//// 作用：给vector容器进行赋值
//// 函数原型：vector& operator=(const vector& vec);// 重载=操作符
//// assign(beg, end);// 将[begin,end)区间内的数据拷贝赋值给本身
//// assign(n, elem);// 将n个elem拷贝赋值给本身
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//// 打印vector中的数据
//void vectorPrint(vector<int>& v)
//{
//	// 利用迭代器遍历vector容器
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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
//	vectorPrint(v1);
//
//	// 赋值 operator=
//	vector<int> v2;
//	v2 = v1;
//	vectorPrint(v2);
//
//	// assign
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	vectorPrint(v3);
//	//n个elem 方式赋值
//	vector<int> v4;
//	v4.assign(10, 3);
//	vectorPrint(v4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：vector赋值方式比较简单，使用operator=方式，或者assign方式都可以