///* 5.3.2 random_shuffle 
//* 作用：洗牌  指定范围中的元素进行随机调整次序
//* 函数原型：
//* random_shuffle(iterator beg, iterator end);
//* 指定范围中元素进行随机调整次序
//* beg  开始迭代器
//* end  结束迭代器
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//
//using namespace std;
//
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test1()
//{
//	// 添加随机数种子
//	srand((unsigned int)time(NULL));
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;
//
//	// 利用洗牌 算法 打乱顺序
//	random_shuffle(v.begin(), v.end());
//	// 但是如果不包含随机数种子的话，每次打乱的次序都一样
//
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：random_shuffer洗牌算法比较实用，但是在使用时注意要加上随机数种子