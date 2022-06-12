//// 3.3.5 deque插入和删除
//// 作用：向deque容器中插入和删除数据
//// 函数原型：
//// 两端插入操作：
//// push_back(elem); // 在容器尾部插入一个数据
//// push_front(elem); // 在容器头部插入一个数据
//// pop_back(); // 在容器尾部删除一个数据
//// pop_front(); // 在容器头部删除一个数据
//// 指定位置操作：
//// insert(pos, elem); // 在pos位置处插入elem
//// insert(pos, n, elem); // 在pos位置处插入n个elem
//// insert(pos, beg, end); // 在pos位置处往容器中插入[beg,end)这个区间中的数据
//// clear(); // 清空容器中的数据
//// erase(beg, end); // 删除[beg,end)之间的数据
//// erase(pos); // 删除pos位置处的数据
//
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
//// 两端插入数据
//void test1()
//{
//	deque<int> d1;
//
//	// 尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	
//	// 头插
//	d1.push_front(100);
//	d1.push_front(200);
//	// 200 100 10 20
//	printDeque(d1);
//
//	// 尾删
//	d1.pop_back();
//	// 200 100 10 
//	printDeque(d1);
//
//	// 头删
//	d1.pop_front();
//	// 100 10
//	printDeque(d1);
//}
//
//// 指定位置插入数据
//void test2()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//	// 在某个位置插入一个数
//	d1.insert(d1.begin(), 11);
//	printDeque(d1);
//	// 在某个位置插入n个elem
//	d1.insert(d1.begin(), 2, 22);
//	printDeque(d1);
//
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	// 在某个位置插入一段区间
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//// 指定位置删除
//void test3()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	// 200 100 10 20
//	printDeque(d1);
//
//	// 可以先准备一个迭代器,可以使迭代器偏移来指定任意位置的数据
//	deque<int>::iterator it = d1.end();
//	d1.erase(--it);
//	// 200 100 10 
//	printDeque(d1);
//
//	// 按区间方式删除
//	//d1.erase(d1.begin(), d1.end());
//	// 清空
//	d1.clear();
//	printDeque(d1);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//// 总结：插入和删除提供的位置都是迭代器！不能提供索引值，比如1，2，3，
////			push_back();	尾插
////			push_front();	头插
////			pop_back();		尾删
////			pop_front();	头删
