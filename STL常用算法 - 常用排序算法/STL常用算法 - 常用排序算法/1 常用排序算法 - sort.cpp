///* 5.3 常用排序算法
//* 算法简介：
//* sort  对容器中的元素进行排序
//* random_shuffle  洗牌  指定范围内的元素随机调整次序
//* merge  容器元素合并，并存储到另一个容器中
//* reverse  反转指定范围的元素
//* 
//* 5.3.1 sort
//* 作用：对容器中元素进行排序
//* 函数原型：
//* sort(iterator beg, iterator end, _Pred);
//* beg 开始迭代器
//* end 结束迭代器
//* _Pred 谓词  (可写可不写，不写默认排序为从小到大，写的话按照自己写的排序规则进行排序)
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//
//	// 利用sort进行排序
//	sort(v.begin(), v.end());
//	// 利用for_each来进行打印容器中的数据
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;
//
//	// 改变排序规则为 降序
//	sort(v.begin(), v.end(), greater<int>());// greater<int> ()  内建的函数对象
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：sort 是最常用的排序算法，需要熟练掌握