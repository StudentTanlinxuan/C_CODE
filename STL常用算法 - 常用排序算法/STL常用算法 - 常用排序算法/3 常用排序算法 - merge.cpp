///* 5.3.3 merge
//* 作用：将两个容器元素合并，并储存到另一容器中
//* 函数原型：
//* merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//* 容器中的元素合并，并储存到另一容器中
//* 注意：两个容器中的元素必须是 有序 的
//* beg1 容器1的开始迭代器 
//* end1 容器1的结束迭代器
//* beg2 容器2的开始迭代器
//* end2 容器2的结束迭代器
//* dest 目标容器开始迭代器
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		//v2.push_back(i + 1);
//	}
//
//	for (int i = 10; i > 0; i--)
//	{
//		//v1.push_back(i);
//		v2.push_back(i);
//	}
//
//	// 利用merge将v1和v2合并在一起
//	// 注意：1. 合并时两个容器必须是 有序 的  
//	// 2. 两个容器的序列必须相同，不可以一个是升序一个是降序
//	
//	// 目标容器
//	vector<int> vTarget;
//	
//	// 提前要给目标容器分配空间
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), vTarget.end(), Myprint);
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：merge在合并时必须是两个有序容器
////       必须提前给目标容器分配内存空间