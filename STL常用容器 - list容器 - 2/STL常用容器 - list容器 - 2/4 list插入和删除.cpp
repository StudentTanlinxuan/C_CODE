//// 3.7.5 list容器插入和删除
//// 作用：对list容器的数据进行插入和删除
//// 函数原型：
///*
//* push_back(elem);//在容器尾部加入一个元素
//* pop_back();//删除容器中最后一个元素
//* push_front(elem);//在容器开头插入一个元素
//* pop_front();//从容器开头移除第一个元素
//* insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//* insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
//* insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
//* clear();//移除容器的所有数据
//* erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//* erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//* remove(elem);//删除容器中所有与elem值匹配的元素。
//*/
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
//	list<int> L;
//
//	// push_back尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	// push_front头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	// 打印
//	// 300 200 100 10 20 30
//	printList(L);
//
//	// pop_back尾删
//	// 300 200 100 10 20 
//	L.pop_back();
//	printList(L);
//
//	// pop_front头删
//	// 200 100 10 20
//	L.pop_front();
//	printList(L);
//
//	// insert插入
//	list<int>::iterator it = L.begin();
//	//list<int>::iterator it2 = L.begin();
//	//it2 = L.insert((++it),1000); // it2的位置就是插入进来1000的位置
//	L.insert((++it),1000);
//	// 200 1000 100 10 20
//	// cout << *it2 << endl;
//	printList(L);
//
//	// erase删除
//	it = L.begin();
//	L.erase(++it);
//	// 200 100 10 20
//	printList(L);
//
//	// remove移除  
//	L.push_back(1000);
//	L.push_back(1000);
//	L.push_back(1000);
//	L.push_back(1000);
//	printList(L);
//	L.remove(1000); // 将容器中所有1000的数据都删除
//	printList(L);
//
//	// clear清空
//	L.clear();
//	printList(L);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：
//// 尾插 -- push_back();
//// 头插 -- push_front();
//// 尾删 -- pop_back();
//// 头删 -- pop_front();
//// 插入 -- insert
//// 删除 -- erase
//// 移除 -- remove
//// 清空 -- clear