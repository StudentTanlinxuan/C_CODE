//// 3.3.2 deque构造函数
//// 作用：deque容器构造
//// 函数原型：
//// deque<T> deqT; // 默认构造形式
//// deque(beg, end); // 构造函数将[beg,end)区间之间的元素拷贝给本身
//// deque(n, elem); // 构造函数将n个elem拷贝给本身
//// deque(const deque& deq); // 拷贝构造函数  将deq拷贝给本身
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  参数部分加上const修饰，迭代器也要修改为const_iterator迭代器 就可以使容器中的数据不可以修改了
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
//
//	printDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int> d3(10, 100);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：deque容器和vector容器的构造方式几乎一致，灵活使用即可