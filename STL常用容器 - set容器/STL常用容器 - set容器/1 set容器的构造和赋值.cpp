///*set基本概念：所有元素在插入时都会被自动排序
//* set和multiset区别：set不允许容器中有重复的元素 
//*					 multiset允许容器中有重复的元素
//* 
//* 3.8.2 set构造和赋值
//* 作用：创建set容器并赋值
//* 函数原型：
//* 构造：
//* set<T> st; // 默认构造
//* set(const set& st); // 拷贝构造函数
//* 赋值：
//* set& operator=(const set& st);// 重载等号运算符
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	set<int> s1;
//	
//	// 插入数据 只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//
//	// 遍历容器
//	// set容器特点：set插入元素时会对其进行排序
//	//				set容器不允许插入重复值
//	printSet(s1);
//
//	// 拷贝构造
//	set<int> s2(s1);
//	printSet(s2);
//
//	// 赋值
//	set<int> s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：set容器插入数据用insert
////		 set容器插入数据的数据会自动排序