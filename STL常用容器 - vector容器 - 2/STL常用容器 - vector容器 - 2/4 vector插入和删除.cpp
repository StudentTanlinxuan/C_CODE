//// 3.2.5 vector插入和删除
//// 作用：对vector容器进行插入和删除
//// 函数原型：push_back(elem); // 尾部插入元素
//// pop_back(); // 删除最后一个元素
//// insert(const_iterator pos, ele); // 迭代器指定位置插入pos插入元素ele
//// insert(const_iterator pos, int count, ele); // 迭代器指定位置pos插入count个元素ele
//// erase(const_iterator pos); // 删除迭代器指向的元素
//// erase(const_iterator start, const_iterator end);// 删除迭代器从start到end之间的元素
//// clear(); // 删除容器中所有元素
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	vector<int> v1;
//	// 尾插数据
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	// 遍历
//	printVector(v1);
//
//	// 尾删
//	v1.pop_back();
//	printVector(v1);
//
//	// 插入  第一个参数是迭代器
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	// 插入的重载版本  往迭代器指定位置插入若干个数
//	v1.insert(v1.begin(), 3, 1000);
//	printVector(v1);
//
//	// 删除  第一个参数也是迭代器
//	v1.erase(v1.begin());
//	printVector(v1);
//	// 删除的重载版本  删除两个迭代器之间的数据
//	//v1.erase(v1.begin(), v1.end());
//	// 相当于提供的clear();  清空
//	v1.clear();
//	printVector(v1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：push_back(); // 尾插
////		 pop_back(); // 尾删
////		 insert(); // 插入(位置为迭代器)
////		 erase(); // 删除(位置为迭代器)
////		 clear(); // 清空
//// 