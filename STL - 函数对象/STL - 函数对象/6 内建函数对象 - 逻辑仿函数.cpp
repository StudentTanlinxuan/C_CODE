/*4.3.4 逻辑仿函数
* 作用：实现逻辑运算
* **函数原型：**
* template<class T> bool logical_and<T>                //逻辑与
* template<class T> bool logical_or<T>                //逻辑或
* template<class T> bool logical_not<T>              //逻辑非
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

void test1()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// 逻辑非 将v中的数据搬运至v2中，并执行取反操作
	vector<bool> v2;
	v2.resize(v.size()); // 必须要重新指定v2的容器大小，不然放不进去数据

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test1();
	return 0;
}