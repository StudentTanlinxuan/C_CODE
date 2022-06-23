/*5.1.2 transform
* 作用：搬运容器到另一个容器中
* 函数原型：
* transform(iterator beg1, iterator end1, iterator beg2, _func);
* beg1 源容器开始迭代器
* end1 源容器结束迭代器
* beg2 目标容器开始迭代器
* _func 函数或函数对象
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Transform
{
public:
	int operator()(int v)
	{
		return v + 100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test1()
{
	vector<int> v;// 源容器

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;// 目标容器
	vTarget.resize(v.size()); // 目标容器 需要提前开辟空间
	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}

int main()
{
	test1();
	return 0;
}
// 总结：搬运的目标容器必须要提前开辟空间，否则无法正常搬运