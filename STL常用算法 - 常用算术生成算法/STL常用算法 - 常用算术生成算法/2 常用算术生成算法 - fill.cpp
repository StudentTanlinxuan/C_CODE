/* 5.5.2 fill
* 作用：向容器中填充指定的元素
* 函数原型：
* fill(iterator beg, iterator end, value);
* 向容器中填充指定的元素
* beg	开始迭代器
* end   结束迭代器
* value 填充的值
*/



#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

void myPrint(int val)
{
	cout << val << " ";
}

void test1()
{
	vector<int> v;
	v.resize(10);
	// 重新指定大小，默认值为0
	//for_each(v.begin(), v.end(), myPrint);
	//cout << endl;

	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test1();
	return 0;
}
// 总结：利用fill可以将容器区间内元素填充为 指定的值