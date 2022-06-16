//// 3.7.7 list反转和排序
//// 作用：将容器中的元素反转，以及将容器中的元素排序
//// 函数原型：
//// reverse(); // 反转链表
//// sort(); // 排序链表
//
//#include<iostream>
//#include<list>
//#include<algorithm>
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
//// 反转
//void test1()
//{
//	list<int> L1;
//
//	L1.push_back(40);
//	L1.push_back(20);
//	L1.push_back(50);
//	L1.push_back(10);
//	L1.push_back(30);
//	cout << "反转前：" << endl;
//	printList(L1);
//
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//}
//
//bool MyCompare(int v1, int v2)
//{
//	// 降序 就让第一个数 > 第二个数
//	return v1 > v2;
//}
//
//// 排序
//void test2()
//{
//	list<int> L1;
//
//	L1.push_back(40);
//	L1.push_back(20);
//	L1.push_back(50);
//	L1.push_back(10);
//	L1.push_back(30);
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	cout << "排序后：" << endl;
//	// 所有不支持随机访问迭代器的容器，不可以用标准算法
//	// 不支持随机访问迭代器的容器，内部会提供对应一些算法
//	//sort(L1.begin(), L1.end());
//
//	L1.sort();// 默认排序规则是从小到大 升序排列
//	printList(L1);
//
//	// 如何降序
//	L1.sort(MyCompare);
//	printList(L1);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：reverse() -- 反转链表(成员函数)
////		 sort() -- 排序链表(成员函数)