// 3.3.7 deque排序
// 作用：利用算法实现对deque容器中数进行排序
// 函数原型：
// sort(iterator beg, iterator end);// 对beg和end区间内元素进行排序

#include<iostream>
#include<deque>
#include<algorithm>// 标准算法头文件

using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);

	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	printDeque(d1);

	// 排序 sort默认排序规则是从小到大 升序
	// 对于支持随机访问的迭代器的容器，都可以利用sort算法来对其进行排序
	// vector容器也可以使用sort来对其里面的数据进行排序
	sort(d1.begin(), d1.end());
	cout << "排序后：" << endl;
	printDeque(d1);
}

int main()
{
	test1();
	return 0;
}
// 总结：sort算法非常实用，使用是要包含头文件algorithm即可
// sort(iterator beg, iterator end);  并非属于容器的成员函数  两个位置都是需要提供迭代器