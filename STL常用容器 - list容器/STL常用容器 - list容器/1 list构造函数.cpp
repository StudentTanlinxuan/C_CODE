//// 3.7.2 list构造函数
//// 作用：创建list容器
//// 函数原型：
//// list<T> lst; // list采用类模板实现，对象默认构造形式
//// list(beg,end); // 构造函数将[beg,end)区间中的元素拷贝本身
//// list(n, elem); // 构造函数将n个elem拷贝到本身
//// list(const list& lst);// 拷贝构造函数 
//
//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	// 创建list容器
//	list<int> L1; // 默认构造
//
//	// 插入数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	// 遍历容器
//	printList(L1);
//
//	// 区间方式构造
//	list<int> L2((++L1.begin()), (--L1.end()));// 迭代器相当于指针
//	printList(L2);
//
//	// 拷贝构造
//	list<int> L3(L1);
//	printList(L3);
//
//	// n个elem
//	list<int> L4(10, 1000);
//	printList(L4);
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：list构造方式同其他几个STL常用容器，熟练掌握即可