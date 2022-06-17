///*3.8.4 set插入和删除
//* 作用：set容器进行插入数据和删除数据
//* 函数原型：
//* insert(elem);// 在容器中插入元素
//* clear();// 清除所有元素
//* erase(pos); // 删除pos迭代器所指的元素，返回下一个元素的迭代器
//* erase(beg,end);// 删除[beg,end)的所有元素，返回下一个元素的迭代器
//* erase（elem); // 删除容器中值为elem的元素
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void printSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	set<int> s1;
//	// 插入数据
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//
//	// 遍历
//	printSet(s1);
//
//	// 删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	// 删除重载版本
//	s1.erase(30);
//	printSet(s1);
//
//	// 清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：clear(); -- 清空
////		 erase(); -- 删除
////		 insert(); -- 插入