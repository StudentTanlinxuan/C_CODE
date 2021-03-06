/* 5.6.3 set_difference
* 作用：求两个集合的差集
* 函数原型：
* set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
* 求两个集合的差集
* 注意：两个集合必须是有序序列
* beg1 容器1开始迭代器
* end1 容器1结束迭代器
* beg2 容器2开始迭代器
* end2 容器2结束迭代器
* dest 目标容器开始迭代器
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Myprint(int val)
{
	cout << val << " ";
}

void test1()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		//v2.push_back(i + 5);
	}

	// 这种情况v2和v1的差集为空
	//for (int i = 0; i < 5; i++)
	//{
	//	v2.push_back(i);
	//	//v2.push_back(i + 5);
	//} 

	vector<int> vTarget;
	// 提前给目标容器开辟空间
	// 最特殊的情况，两个容器没有交集，取两个容器中大的size作为目标容器开辟的空间
	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint);
	cout << endl;

	cout << "v2和v1的差集为：" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint);
	cout << endl;
}

int main()
{
	test1();
	return 0;
}
/* 总结：
*		1. 求差集的两个集合必须是有序序列
*		2. 目标容器开辟空间需要从两个容器中取最大的
*		3. set_difference返回值既是差集中最后一个元素的位置
*/