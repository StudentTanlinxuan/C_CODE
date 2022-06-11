//// 3.3.3 deque赋值操作
//// 作用：给deque容器进行赋值
//// 函数原型：
//// deque& operator=(const deque& deq);// 重载等号操作符
//// assign(beg,end);// 将[beg, end)之间的数据拷贝赋值给本身
//// assign(n, elem);// 将n个elem值拷贝赋值给本身
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	// operator = 赋值操作
//	deque<int> d2;
//	d2 = d1;
//	printDeque(d2);
//
//	// assign 赋值操作           assign - 分配
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int> d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：deque容器的赋值和vector容器赋值相同，需