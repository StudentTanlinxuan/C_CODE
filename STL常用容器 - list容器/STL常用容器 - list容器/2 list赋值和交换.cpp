//// 3.7.3 list赋值和交换
//// 作用：给list容器进行赋值，以及交换list容器
//// 函数原型：
//// assign(beg,end);// 将[beg,end)区间中的数据拷贝赋值给本身
//// assign(n, elem);// 将n个elem拷贝赋值给本身
//// list& operator=(const list& lit); // 重载等号运算符
//// swap(lst); // 将lst与本身的元素互换
//
//#include<iostream>
//#include<list>
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
//// 赋值
//void test1()
//{
//	list<int> L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int> L2;
//	L2 = L1; // operator=方式赋值
//	printList(L2);
//
//	// 区间方式
//	list<int> L3(L1.begin(), L1.end());
//	printList(L3);
//
//	// n个elem方式
//	list<int>L4(10, 100);
//	printList(L4);
//
//}
//
//// 交换
//void test2()
//{
//	list<int> L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int> L2(10, 100);
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "交换后：" << endl;
//	printList(L1);
//	printList(L2);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：list赋值和交换操作能够灵活运用即可